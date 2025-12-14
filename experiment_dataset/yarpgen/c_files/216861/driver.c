#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 75680521;
unsigned long long int var_2 = 17355721916349603132ULL;
signed char var_3 = (signed char)-59;
short var_4 = (short)-5723;
unsigned long long int var_7 = 12035792987881994360ULL;
short var_9 = (short)-32321;
int var_10 = 503525420;
int var_11 = 1498987467;
signed char var_12 = (signed char)-16;
int zero = 0;
long long int var_13 = 7098904819376068316LL;
unsigned char var_14 = (unsigned char)173;
long long int var_15 = -4308994889653032602LL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)145;
int var_18 = -437042994;
unsigned char var_19 = (unsigned char)189;
unsigned short var_20 = (unsigned short)60328;
unsigned int var_21 = 3861292245U;
signed char var_22 = (signed char)-67;
signed char arr_4 [11] ;
short arr_6 [11] [11] ;
signed char arr_9 [15] [15] ;
unsigned int arr_10 [15] [15] ;
unsigned long long int arr_11 [15] [15] ;
signed char arr_12 [15] [15] ;
unsigned long long int arr_14 [20] [20] ;
unsigned long long int arr_15 [20] ;
unsigned short arr_16 [20] ;
_Bool arr_17 [20] ;
unsigned short arr_3 [11] ;
unsigned short arr_8 [11] [11] ;
unsigned int arr_13 [15] ;
signed char arr_18 [20] ;
short arr_19 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-1709;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = 2311218259U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = 17817699507403041233ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = 1931096494839484782ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = 13884899415678828117ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = (unsigned short)5061;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)2244;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)43503;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = 84257337U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = (short)27024;
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
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
