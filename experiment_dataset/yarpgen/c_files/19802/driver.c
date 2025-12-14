#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1989599959;
unsigned long long int var_1 = 14769479705952342168ULL;
long long int var_2 = 6884304773953809633LL;
unsigned short var_4 = (unsigned short)17308;
unsigned char var_5 = (unsigned char)14;
unsigned int var_6 = 3124441579U;
unsigned int var_7 = 3207070579U;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)67;
unsigned int var_11 = 3303852935U;
int zero = 0;
long long int var_12 = -3351857032919792197LL;
unsigned short var_13 = (unsigned short)36919;
int var_14 = -2016358447;
int var_15 = 80096998;
unsigned char var_16 = (unsigned char)213;
long long int var_17 = 5272511683000763271LL;
unsigned char var_18 = (unsigned char)115;
int var_19 = -357372600;
int arr_4 [16] [16] ;
unsigned char arr_10 [22] [22] ;
unsigned char arr_11 [22] ;
unsigned long long int arr_6 [16] ;
long long int arr_7 [16] ;
unsigned char arr_8 [16] ;
long long int arr_12 [22] ;
unsigned int arr_13 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 702490421;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 16397872588794649510ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = -6241035905215247149LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = -8838742665511556383LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = 2800659826U;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
