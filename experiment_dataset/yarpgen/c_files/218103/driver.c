#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10080;
signed char var_2 = (signed char)-72;
short var_3 = (short)-6258;
short var_4 = (short)7392;
short var_6 = (short)-6929;
short var_7 = (short)-24007;
unsigned char var_8 = (unsigned char)119;
unsigned int var_9 = 2376191275U;
unsigned short var_10 = (unsigned short)21707;
unsigned char var_11 = (unsigned char)99;
short var_13 = (short)29720;
unsigned char var_14 = (unsigned char)206;
int zero = 0;
short var_15 = (short)-14774;
long long int var_16 = 1803560349460555580LL;
unsigned int var_17 = 4193304165U;
short var_18 = (short)-18812;
unsigned long long int var_19 = 4414431039185578035ULL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)7231;
unsigned char var_22 = (unsigned char)227;
short arr_1 [23] ;
_Bool arr_2 [23] [23] [23] ;
short arr_4 [21] [21] ;
signed char arr_5 [21] ;
_Bool arr_10 [16] ;
unsigned char arr_7 [21] ;
short arr_11 [16] ;
unsigned int arr_12 [16] [16] ;
unsigned char arr_13 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-29254;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (short)15762;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (short)7896;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = 3155252568U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (unsigned char)247;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
