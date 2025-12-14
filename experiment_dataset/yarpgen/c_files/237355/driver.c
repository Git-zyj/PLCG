#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)2;
signed char var_1 = (signed char)-62;
unsigned short var_2 = (unsigned short)28376;
signed char var_4 = (signed char)10;
int var_5 = 411048273;
unsigned short var_6 = (unsigned short)6619;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)49;
int zero = 0;
int var_10 = 1503696801;
short var_11 = (short)-19222;
long long int var_12 = 3254656454081068443LL;
short var_13 = (short)17482;
unsigned int var_14 = 657677985U;
signed char var_15 = (signed char)-66;
unsigned short var_16 = (unsigned short)1239;
short var_17 = (short)14017;
unsigned short var_18 = (unsigned short)60134;
signed char var_19 = (signed char)-68;
signed char var_20 = (signed char)-3;
unsigned long long int var_21 = 17326722530522955919ULL;
unsigned int var_22 = 3691694664U;
unsigned char arr_1 [23] ;
signed char arr_2 [23] ;
signed char arr_4 [23] [23] [23] [23] ;
unsigned char arr_5 [23] [23] ;
short arr_6 [23] [23] [23] [23] [23] [23] ;
unsigned int arr_8 [23] ;
unsigned long long int arr_13 [22] [22] ;
int arr_14 [15] ;
short arr_10 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)28430;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 2685602867U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = 16359106207892803657ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = 572617020;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-13294;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
