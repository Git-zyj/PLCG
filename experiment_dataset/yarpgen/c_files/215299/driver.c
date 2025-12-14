#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42183;
unsigned short var_5 = (unsigned short)4276;
unsigned long long int var_7 = 431828933445767782ULL;
unsigned char var_8 = (unsigned char)144;
unsigned int var_9 = 1474424489U;
signed char var_10 = (signed char)99;
signed char var_11 = (signed char)-53;
unsigned long long int var_12 = 13018837081617993864ULL;
unsigned long long int var_15 = 16435039943302803864ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 1588830140;
unsigned short var_22 = (unsigned short)64864;
short var_23 = (short)3274;
unsigned char var_24 = (unsigned char)157;
unsigned long long int var_25 = 17677911533321432440ULL;
short var_26 = (short)27084;
int var_27 = 170097503;
unsigned char arr_0 [23] ;
short arr_1 [23] ;
unsigned long long int arr_2 [23] ;
int arr_3 [23] [23] [23] ;
_Bool arr_6 [23] [23] [23] ;
short arr_7 [23] [23] [23] ;
unsigned long long int arr_8 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-15583;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 7472365692242862394ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -1680712779;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-25576;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = 16139168330059515871ULL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
