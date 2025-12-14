#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2099115532;
short var_3 = (short)-9979;
long long int var_4 = -1657976498814692997LL;
unsigned char var_6 = (unsigned char)41;
signed char var_7 = (signed char)-98;
short var_8 = (short)-14675;
int var_11 = 1859089165;
_Bool var_13 = (_Bool)0;
unsigned int var_16 = 1784124997U;
int zero = 0;
unsigned char var_20 = (unsigned char)130;
unsigned char var_21 = (unsigned char)62;
unsigned char var_22 = (unsigned char)141;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)1;
long long int var_25 = 4583583978091739197LL;
unsigned int var_26 = 3244224280U;
short var_27 = (short)-16939;
short var_28 = (short)-17357;
signed char var_29 = (signed char)66;
long long int var_30 = -29560506506755931LL;
unsigned long long int var_31 = 16579220814099763452ULL;
signed char arr_0 [20] ;
signed char arr_1 [20] ;
_Bool arr_4 [21] ;
unsigned char arr_5 [21] [21] ;
unsigned char arr_9 [21] [21] [21] [21] ;
unsigned long long int arr_16 [21] [21] [21] [21] [21] ;
unsigned int arr_2 [20] ;
_Bool arr_3 [20] ;
unsigned long long int arr_17 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 6238534983096205892ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 138386175U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = 8539113009545936624ULL;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
