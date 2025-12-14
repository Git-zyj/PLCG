#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2102120932005719264LL;
unsigned char var_1 = (unsigned char)96;
unsigned short var_8 = (unsigned short)47168;
signed char var_11 = (signed char)15;
signed char var_12 = (signed char)-48;
unsigned short var_13 = (unsigned short)15552;
_Bool var_17 = (_Bool)1;
unsigned char var_19 = (unsigned char)146;
int zero = 0;
unsigned long long int var_20 = 7911015752154292732ULL;
unsigned int var_21 = 3680958858U;
short var_22 = (short)-12321;
signed char var_23 = (signed char)-3;
unsigned short var_24 = (unsigned short)49966;
unsigned char var_25 = (unsigned char)192;
long long int var_26 = 9009315776577173828LL;
signed char var_27 = (signed char)-91;
signed char var_28 = (signed char)-119;
unsigned short var_29 = (unsigned short)49394;
unsigned int arr_5 [13] [13] ;
unsigned long long int arr_13 [13] [13] [13] [13] [13] [13] ;
long long int arr_17 [19] [19] ;
short arr_18 [19] ;
long long int arr_20 [19] [19] [19] ;
unsigned short arr_21 [19] ;
signed char arr_14 [13] [13] [13] ;
signed char arr_15 [13] ;
unsigned short arr_22 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 2475834555U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 6208667135930650454ULL : 14600866970655346723ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = 9175734180391188022LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (short)3948;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = -1305546990587586868LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_21 [i_0] = (unsigned short)26757;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-127 : (signed char)-13;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (signed char)124 : (signed char)97;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned short)16685 : (unsigned short)37366;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
