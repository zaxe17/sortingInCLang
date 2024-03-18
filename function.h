#ifndef FUNCTIONS
#include <stdio.h>

int temp;

// BUBBLE SORTING
void BUBBLESORT(int array[], int size) {
    for (int repeat_process = 0; repeat_process < size; repeat_process++) {
        for (int swap = 0; swap < size - 1; swap++) {
            if (array[swap] > array[swap + 1]) {
                temp = array[swap + 1];
                array[swap + 1] = array[swap];
                array[swap] = temp;
            }
        }
    }

    printf("\nArray in arrange ordered in BUBBLE SORTING: ");
    for (int output = 0; output < size; output++) {
        printf("%d ", array[output]);
    }
}

// int array[] = {1, 4, 8, 3, 2, 10, 6, 7, 5, 9};
/* 
1, 4, 8, 3, 2, 10, 6, 7, 5, 9
1, 2, 8, 3, 4, 10, 6, 7, 5, 9
1, 2, 3, 8, 4, 10, 6, 7, 5, 9
1, 2, 3, 4, 8, 10, 6, 7, 5, 9
1, 2, 3, 4, 5, 10, 6, 7, 8, 9
1, 2, 3, 4, 5, 6, 10, 7, 8, 9
1, 2, 3, 4, 5, 6, 7, 10, 8, 9
1, 2, 3, 4, 5, 6, 7, 8, 10, 9
1, 2, 3, 4, 5, 6, 7, 8, 9, 10
*/
// SELECTION SORTING
void SELECTIONSORT(int array[], int size) {
    for (int first_elem = 0; first_elem < size - 1; first_elem++) {
        int min_index = first_elem;

        for (int next_elem = first_elem + 1; next_elem < size; next_elem++) {
            if (array[next_elem] < array[min_index]) {
                min_index = next_elem;
            }
        }

        if (min_index != first_elem) {
            temp = array[min_index];
            array[min_index] = array[first_elem];
            array[first_elem] = temp;
        }
    }

    printf("\nArray in arrange ordered in SELECTION SORTING: ");
    for(int output = 0; output < size; output++) {
        printf("%d ", array[output]);
    } 
}

// int array[] = {1, 4, 8, 3, 2, 10, 6, 7, 5, 9};
/* 
1, 4, 8, 3, 2, 10, 6, 7, 5, 9
1, 3, 4, 8, 2, 10, 6, 7, 5, 9
1, 2, 3, 4, 8, 10, 6, 7, 5, 9
1, 2, 3, 4, 8, 6, 6, 7, 5, 9
*/
// INSERTION SORTING
void INSERTIONSORT(int array[], int size) {
    for(int index = 0; index < size; index++) {
        temp = array[index]; // 6
        int j = index - 1; // 5

        while(j >= 0 && array[j] > temp) {
            array[j + 1] = array[j];
            j--; 
        }
        array[j + 1] = temp;
    }

    printf("\nArray in arrange ordered in INSERTION SORTING: ");
    for(int output = 0; output < size; output++) {
        printf("%d ", array[output]);
    } 
}

// BINARY SEARCH
int BINARYSEARCH(int array[], int size, int target) {
    int l = 0, r = size - 1;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (target == array[mid]) {
            return mid;
        }
        else if (target < array[mid]) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    return -1;
}

// LINEAR SEARCH
int LINEARSEARCH(int array[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return i; 
        }
    }

    return -1; 
}














// MINIMUM
void MINIMUM(int array[], int size) {
    int min = array[0];

    for(int i = 0; i < size; i++) {
        if(array[i] < min) {
            min = array[i];
        }
    }
    printf("%d", min);
}

// MAXIMUM
void MAXIMUM(int array[], int size) {
    int max = array[0];

    for(int i = 0; i < size; i++) {
        if(array[i] > max) {
            max = array[i];
        }
    }
    printf("%d", max);
}

// REVERSE WORDS
void REVERSE_WORD(char *word) {
    int size = strlen(word);
    int temp;

    for(int i = 0; i < size / 2; i++) {
        temp = word[i];
        word[i] = word[size - 1 - i];
        word[size - 1 - i] = temp;
    }

    printf("%s", word);
}

#define FUNCTIONS
#endif