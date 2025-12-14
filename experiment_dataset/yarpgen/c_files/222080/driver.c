#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-14327;
signed char var_5 = (signed char)-8;
int var_7 = 1507712633;
int var_8 = -1793208387;
long long int var_9 = 2578955976385783242LL;
unsigned short var_10 = (unsigned short)21025;
unsigned char var_11 = (unsigned char)2;
unsigned int var_14 = 2366583230U;
long long int var_17 = -7053171957279220204LL;
int zero = 0;
signed char var_20 = (signed char)-28;
unsigned long long int var_21 = 7669383790807670851ULL;
unsigned long long int var_22 = 10756991500683471517ULL;
long long int var_23 = -8793689172622865658LL;
unsigned long long int var_24 = 15029954584310476969ULL;
unsigned int arr_1 [25] [25] ;
signed char arr_3 [25] ;
unsigned long long int arr_7 [19] ;
signed char arr_11 [19] [19] [19] ;
unsigned long long int arr_12 [19] [19] [19] ;
unsigned short arr_4 [25] ;
long long int arr_5 [25] [25] ;
long long int arr_13 [19] ;
unsigned int arr_14 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 212476473U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 10167219224593756587ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 14344477099353340482ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)42591;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 8727434711262508237LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = -6772530555248855469LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = 1410668577U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
