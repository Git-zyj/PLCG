#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57905;
unsigned int var_2 = 360017529U;
int var_3 = 1312053743;
int var_4 = 1812658658;
unsigned int var_5 = 3590170786U;
unsigned int var_7 = 663800113U;
unsigned long long int var_8 = 2804332811544180593ULL;
short var_9 = (short)-6592;
unsigned int var_10 = 1972717167U;
unsigned int var_11 = 3211843317U;
int var_12 = -2106281109;
unsigned int var_13 = 2165325515U;
short var_14 = (short)19093;
int zero = 0;
long long int var_16 = -3385949050780276134LL;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 377721255U;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)54;
int var_21 = 1644867486;
int var_22 = 1214142528;
unsigned int arr_0 [13] ;
_Bool arr_1 [13] ;
_Bool arr_5 [13] [13] ;
long long int arr_2 [13] [13] ;
unsigned long long int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 330158093U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 655444522280308623LL : 710264763501469702LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 9992307754679460319ULL : 15380434371172903784ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
