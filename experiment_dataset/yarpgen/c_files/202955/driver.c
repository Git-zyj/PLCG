#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6337591441648560933LL;
signed char var_4 = (signed char)62;
int var_6 = -834436244;
signed char var_7 = (signed char)-95;
signed char var_10 = (signed char)-94;
signed char var_13 = (signed char)53;
signed char var_15 = (signed char)-113;
int zero = 0;
signed char var_16 = (signed char)101;
unsigned int var_17 = 31653271U;
unsigned int var_18 = 3179161232U;
signed char var_19 = (signed char)61;
signed char var_20 = (signed char)59;
signed char var_21 = (signed char)41;
unsigned short arr_0 [23] ;
int arr_1 [23] ;
int arr_2 [23] [23] ;
int arr_8 [15] ;
signed char arr_4 [23] [23] ;
signed char arr_13 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)61242;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -1640088073;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = -1776862634;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = -1906095957;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)-62;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
