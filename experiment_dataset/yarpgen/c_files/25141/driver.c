#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)13;
unsigned int var_3 = 2788539681U;
unsigned long long int var_7 = 6978465382706689181ULL;
signed char var_8 = (signed char)105;
signed char var_11 = (signed char)-122;
long long int var_13 = 3580593243443512440LL;
int zero = 0;
signed char var_15 = (signed char)34;
unsigned long long int var_16 = 6614051395535719770ULL;
int var_17 = -96974929;
unsigned int var_18 = 3437781785U;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)56;
unsigned int var_22 = 385710086U;
unsigned long long int var_23 = 15384220604424810957ULL;
_Bool var_24 = (_Bool)0;
unsigned int var_25 = 598709242U;
unsigned int var_26 = 1730474897U;
_Bool var_27 = (_Bool)0;
unsigned int var_28 = 1191988806U;
signed char var_29 = (signed char)10;
short arr_0 [23] ;
short arr_1 [23] ;
short arr_2 [23] [23] ;
unsigned int arr_5 [25] [25] ;
unsigned short arr_7 [25] ;
short arr_8 [25] [25] ;
unsigned long long int arr_10 [25] [25] ;
long long int arr_11 [25] ;
unsigned int arr_12 [25] [25] ;
unsigned char arr_15 [25] [25] [25] ;
long long int arr_17 [25] [25] [25] [25] ;
unsigned int arr_19 [25] [25] [25] [25] [25] [25] ;
unsigned int arr_3 [23] ;
_Bool arr_4 [23] [23] ;
short arr_13 [25] ;
int arr_20 [25] [25] ;
unsigned char arr_25 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)-7906;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-31380 : (short)-24955;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (short)8965;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 2038251758U : 3020179599U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (unsigned short)41646;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-6292;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 3664445452996103718ULL : 7152702551999481960ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 5052716094490160719LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 1838217307U : 825539419U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)204 : (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -790513736724665663LL : 6328950491139582827LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3949520590U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2648287486U : 296733001U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)19478 : (short)31674;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? 1574962370 : 2057793562;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (unsigned char)160 : (unsigned char)45;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
