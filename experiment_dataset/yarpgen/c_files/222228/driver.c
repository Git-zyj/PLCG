#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21688;
int var_1 = 928486711;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)124;
unsigned short var_6 = (unsigned short)19203;
int var_7 = -968953076;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -5524135895473355675LL;
unsigned short var_12 = (unsigned short)7629;
short var_13 = (short)-28257;
unsigned int var_14 = 42292039U;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3084741365U;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned short arr_0 [16] [16] ;
int arr_2 [16] ;
unsigned int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)20757;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 366023942;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 348138617U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
