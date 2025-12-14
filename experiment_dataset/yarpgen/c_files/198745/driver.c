#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13289410535752699765ULL;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)171;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-13482;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)35;
unsigned long long int var_7 = 10153475381873401163ULL;
unsigned int var_8 = 1317677739U;
unsigned short var_10 = (unsigned short)8421;
short var_11 = (short)-18641;
int zero = 0;
unsigned long long int var_12 = 2784956125418955192ULL;
long long int arr_5 [23] ;
unsigned short arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -285734882669245571LL : 2565458813140937300LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55363 : (unsigned short)7472;
}

void checksum() {
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
