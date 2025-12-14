#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)9;
unsigned int var_3 = 2294169742U;
unsigned char var_5 = (unsigned char)226;
unsigned char var_6 = (unsigned char)213;
int var_7 = 544984050;
int var_8 = -398764555;
unsigned char var_9 = (unsigned char)123;
int var_12 = -419499400;
int zero = 0;
int var_13 = -1333066675;
long long int var_14 = -1695436339607803673LL;
int var_15 = 1012132637;
short var_16 = (short)6481;
int var_17 = 109725409;
unsigned int var_18 = 2770520224U;
_Bool arr_0 [24] ;
signed char arr_1 [24] ;
short arr_2 [24] [24] ;
long long int arr_4 [24] ;
unsigned int arr_3 [24] ;
_Bool arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-20908;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 3942236969585523370LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 3931478376U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
