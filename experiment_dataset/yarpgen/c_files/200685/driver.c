#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)17;
long long int var_6 = 7126726671995234596LL;
unsigned char var_7 = (unsigned char)117;
unsigned char var_8 = (unsigned char)204;
int var_9 = 143985501;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)123;
unsigned int var_15 = 1324150488U;
unsigned int var_16 = 642331287U;
unsigned char var_17 = (unsigned char)171;
unsigned char var_18 = (unsigned char)2;
unsigned char var_19 = (unsigned char)24;
unsigned char var_20 = (unsigned char)90;
int arr_0 [20] [20] ;
long long int arr_1 [20] [20] ;
_Bool arr_4 [25] ;
unsigned int arr_5 [25] [25] ;
unsigned char arr_2 [20] ;
unsigned char arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 374802993;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? -6171363304699791447LL : -52318875362300990LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 2155846083U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)87 : (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned char)184;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
