#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6902419265191037170ULL;
unsigned int var_1 = 4179750401U;
unsigned int var_2 = 474411688U;
signed char var_3 = (signed char)37;
unsigned long long int var_5 = 11944676464863887859ULL;
unsigned char var_6 = (unsigned char)51;
unsigned char var_7 = (unsigned char)12;
unsigned int var_8 = 2967948379U;
unsigned char var_10 = (unsigned char)0;
unsigned int var_11 = 1155154066U;
int zero = 0;
unsigned int var_12 = 1731175286U;
short var_13 = (short)3811;
unsigned char var_14 = (unsigned char)7;
signed char var_15 = (signed char)-75;
unsigned char var_16 = (unsigned char)74;
unsigned char var_17 = (unsigned char)247;
unsigned int var_18 = 3270150472U;
unsigned char var_19 = (unsigned char)228;
unsigned int var_20 = 2273004336U;
unsigned char var_21 = (unsigned char)147;
signed char arr_0 [23] ;
signed char arr_1 [23] [23] ;
unsigned char arr_3 [23] [23] ;
unsigned int arr_4 [23] [23] ;
unsigned char arr_5 [23] ;
unsigned char arr_11 [21] [21] ;
unsigned int arr_2 [23] ;
short arr_6 [23] ;
unsigned char arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)83;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 1948526073U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 545692019U : 2295953674U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (short)-30197;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned char)5;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
