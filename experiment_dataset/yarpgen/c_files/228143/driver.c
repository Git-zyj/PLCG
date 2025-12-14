#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)112;
unsigned long long int var_2 = 3898028963539873944ULL;
unsigned char var_3 = (unsigned char)247;
short var_4 = (short)-26004;
signed char var_6 = (signed char)110;
int var_7 = 1462385881;
unsigned int var_8 = 2799638389U;
signed char var_11 = (signed char)110;
int zero = 0;
unsigned int var_14 = 3223918040U;
short var_15 = (short)-26153;
int var_16 = -1634222325;
short var_17 = (short)-5838;
signed char var_18 = (signed char)93;
unsigned int arr_0 [20] [20] ;
unsigned short arr_4 [20] [20] ;
unsigned long long int arr_5 [20] ;
unsigned int arr_6 [20] [20] ;
unsigned int arr_11 [14] ;
unsigned int arr_16 [25] ;
unsigned long long int arr_8 [20] [20] [20] ;
unsigned long long int arr_9 [20] [20] [20] ;
long long int arr_14 [14] ;
int arr_17 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 2573763655U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)38371;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 10522129090684451122ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = 2080419809U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 2385194514U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = 1425304197U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 9108349108060439129ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 4716191342585604461ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = -5561504124873233336LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_17 [i_0] [i_1] = 1096794912;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
