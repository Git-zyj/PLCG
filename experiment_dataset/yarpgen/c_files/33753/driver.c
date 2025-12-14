#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15177368958301804816ULL;
int var_1 = -1969838101;
signed char var_3 = (signed char)-112;
signed char var_5 = (signed char)-121;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-14;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)84;
unsigned char var_11 = (unsigned char)246;
signed char var_12 = (signed char)122;
int zero = 0;
signed char var_13 = (signed char)67;
short var_14 = (short)-6950;
unsigned int var_15 = 2314158902U;
unsigned int var_16 = 2016653525U;
int var_17 = -126420154;
unsigned char var_18 = (unsigned char)124;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)109;
unsigned short var_21 = (unsigned short)23116;
unsigned char arr_2 [10] [10] ;
short arr_3 [10] ;
unsigned int arr_6 [10] [10] [10] ;
_Bool arr_8 [10] [10] [10] [10] ;
unsigned short arr_14 [15] [15] ;
unsigned int arr_19 [15] [15] [15] ;
signed char arr_4 [10] ;
unsigned char arr_12 [10] [10] ;
int arr_22 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)-27214;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2729554904U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)58148;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3135155613U : 876667672U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)6 : (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = -1891398983;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
