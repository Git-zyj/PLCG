#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 430788566U;
unsigned long long int var_2 = 13369856880331452068ULL;
signed char var_4 = (signed char)-8;
unsigned long long int var_8 = 2578361567485038946ULL;
unsigned char var_9 = (unsigned char)227;
int zero = 0;
unsigned char var_10 = (unsigned char)49;
unsigned long long int var_11 = 15728769014343488502ULL;
short var_12 = (short)-26273;
long long int var_13 = -2870480587026383390LL;
int var_14 = 1506125249;
signed char var_15 = (signed char)-111;
signed char arr_0 [11] ;
unsigned int arr_1 [11] [11] ;
unsigned short arr_2 [11] [11] ;
unsigned long long int arr_3 [11] ;
long long int arr_4 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-56 : (signed char)93;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 1409114759U : 4024946595U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)59077;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 8043474956618334597ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -2645583145207388415LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
