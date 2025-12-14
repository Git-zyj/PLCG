#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1365895611490759976LL;
long long int var_1 = -8600249889257211624LL;
unsigned long long int var_3 = 8379808844978155689ULL;
unsigned long long int var_4 = 6045345807914403722ULL;
short var_5 = (short)7140;
unsigned long long int var_6 = 10050944641472731418ULL;
unsigned int var_7 = 1202056919U;
signed char var_8 = (signed char)116;
unsigned char var_10 = (unsigned char)219;
long long int var_11 = -7522137560853022437LL;
unsigned int var_12 = 1509633589U;
unsigned long long int var_13 = 13508796416929688968ULL;
int zero = 0;
short var_14 = (short)-27661;
unsigned short var_15 = (unsigned short)15965;
short var_16 = (short)-18126;
unsigned long long int var_17 = 12958529287018374898ULL;
_Bool var_18 = (_Bool)0;
unsigned short arr_0 [23] [23] ;
int arr_1 [23] ;
unsigned short arr_2 [23] ;
unsigned short arr_3 [23] ;
unsigned char arr_4 [23] [23] ;
unsigned long long int arr_5 [23] [23] ;
long long int arr_6 [23] [23] [23] ;
unsigned char arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)4321;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1782399694;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)54678;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)62625;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 3875709399509992319ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1255715727092847338LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)51 : (unsigned char)33;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
