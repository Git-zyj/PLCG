#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)0;
unsigned int var_1 = 219865120U;
unsigned int var_2 = 3363551260U;
unsigned int var_3 = 1731577474U;
unsigned int var_4 = 3570390050U;
unsigned long long int var_7 = 2995697726656963482ULL;
signed char var_8 = (signed char)-92;
unsigned long long int var_9 = 13504970421774368291ULL;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)57217;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)9918;
int var_15 = -91164337;
unsigned short var_16 = (unsigned short)32491;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)18110;
int var_19 = 2015487055;
unsigned long long int var_20 = 14455497036084159250ULL;
unsigned char var_21 = (unsigned char)133;
int arr_0 [18] ;
signed char arr_1 [18] ;
unsigned int arr_3 [18] ;
int arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -1231478282;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 21745308U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = -986884253;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
