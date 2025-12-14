#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18279;
long long int var_3 = 1060823953863292476LL;
unsigned long long int var_4 = 5366550561460538778ULL;
short var_6 = (short)168;
unsigned char var_7 = (unsigned char)31;
unsigned char var_8 = (unsigned char)197;
unsigned char var_13 = (unsigned char)145;
int zero = 0;
unsigned char var_14 = (unsigned char)99;
signed char var_15 = (signed char)1;
short var_16 = (short)25255;
unsigned char var_17 = (unsigned char)95;
short var_18 = (short)-27848;
int var_19 = -940768908;
unsigned long long int var_20 = 15274714494349370012ULL;
unsigned char var_21 = (unsigned char)126;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-41;
short var_24 = (short)13481;
unsigned long long int var_25 = 2657697072449646971ULL;
int arr_0 [14] ;
short arr_1 [14] [14] ;
int arr_4 [14] ;
signed char arr_5 [14] [14] [14] ;
long long int arr_6 [14] [14] ;
unsigned char arr_12 [24] ;
unsigned char arr_13 [24] [24] ;
unsigned int arr_2 [14] ;
short arr_11 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 136470083;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-5678;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 1116937165;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 1776043111540536377LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 2543769898U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (short)18421;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
