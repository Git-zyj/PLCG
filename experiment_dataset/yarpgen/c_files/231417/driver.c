#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1098583536;
unsigned int var_4 = 1682323690U;
unsigned char var_7 = (unsigned char)52;
unsigned int var_8 = 347008601U;
_Bool var_9 = (_Bool)0;
long long int var_11 = -4878639430790557117LL;
short var_14 = (short)-19284;
int var_15 = -892761603;
long long int var_16 = 1494278360794246550LL;
int zero = 0;
int var_18 = 131511621;
unsigned int var_19 = 2330648011U;
unsigned char var_20 = (unsigned char)169;
unsigned char var_21 = (unsigned char)72;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-84;
unsigned short arr_1 [23] ;
int arr_6 [23] [23] [23] ;
short arr_8 [23] [23] ;
long long int arr_9 [23] ;
signed char arr_15 [11] [11] [11] ;
unsigned int arr_17 [11] ;
long long int arr_2 [23] ;
long long int arr_3 [23] [23] ;
int arr_11 [23] [23] ;
int arr_18 [11] ;
_Bool arr_19 [11] ;
unsigned char arr_20 [11] [11] [11] ;
unsigned short arr_21 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)53256;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1426150007;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-8533;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = -6675399756369971930LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = 2125008905U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -8099535309272773554LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 6105032173252373979LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = -1975333746;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = 1862091130;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = (unsigned short)53604;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
