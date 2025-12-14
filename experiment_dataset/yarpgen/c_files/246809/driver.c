#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)242;
long long int var_3 = -6954427584064751093LL;
unsigned char var_4 = (unsigned char)54;
unsigned char var_5 = (unsigned char)187;
_Bool var_6 = (_Bool)0;
long long int var_7 = 1426824242220664068LL;
long long int var_8 = -3143995508588391280LL;
_Bool var_9 = (_Bool)0;
long long int var_10 = -6754842021746006443LL;
_Bool var_11 = (_Bool)0;
int var_12 = 555130643;
long long int var_13 = -7952319905702074804LL;
long long int var_14 = 5336843903745956214LL;
int zero = 0;
short var_15 = (short)-26185;
long long int var_16 = -2057961956529632474LL;
_Bool arr_0 [23] ;
short arr_1 [23] [23] ;
long long int arr_2 [23] [23] [23] ;
unsigned short arr_3 [23] ;
int arr_4 [23] ;
_Bool arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)12481;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -2835133991030903803LL : -1936078135737324744LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)14956;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -860051736 : -199960818;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
