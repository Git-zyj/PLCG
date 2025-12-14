#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)147;
signed char var_1 = (signed char)127;
long long int var_2 = -8035389931829553705LL;
int var_4 = 1612299568;
long long int var_5 = 7204364832585370295LL;
unsigned long long int var_6 = 11580056734025880225ULL;
unsigned char var_7 = (unsigned char)85;
short var_8 = (short)11432;
unsigned int var_9 = 2780780058U;
unsigned short var_10 = (unsigned short)63262;
int zero = 0;
unsigned short var_11 = (unsigned short)30300;
signed char var_12 = (signed char)85;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)96;
int arr_0 [20] ;
int arr_1 [20] [20] ;
unsigned short arr_2 [20] ;
unsigned short arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -291749103;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = -2030226500;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)4144;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)234 : (unsigned short)11184;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
