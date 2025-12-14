#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-22602;
short var_3 = (short)-28290;
unsigned long long int var_5 = 13019929751773563087ULL;
unsigned int var_7 = 4001024597U;
unsigned long long int var_8 = 3973178969963930472ULL;
unsigned long long int var_9 = 8765658053957758210ULL;
int zero = 0;
unsigned long long int var_10 = 6058534845937871666ULL;
unsigned int var_11 = 2970689955U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 6257301570806832466ULL;
unsigned int var_14 = 1898739674U;
signed char var_15 = (signed char)-117;
unsigned int var_16 = 3305439799U;
unsigned int var_17 = 821833778U;
unsigned long long int var_18 = 12084271463141530029ULL;
long long int var_19 = 5517372555556708519LL;
unsigned char var_20 = (unsigned char)220;
long long int arr_0 [19] [19] ;
unsigned char arr_3 [19] [19] [19] ;
unsigned short arr_4 [19] ;
unsigned int arr_5 [19] [19] [19] ;
unsigned long long int arr_6 [19] [19] [19] ;
unsigned int arr_7 [19] [19] [19] [19] ;
unsigned int arr_10 [19] ;
unsigned long long int arr_11 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 534083584115934875LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)22089 : (unsigned short)10774;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 890132115U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 11625591315040325686ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 2130031070U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 1401642713U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 16382906843463652508ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
