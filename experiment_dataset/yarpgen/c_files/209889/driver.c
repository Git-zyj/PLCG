#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)16;
_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)132;
unsigned int var_10 = 2439924317U;
_Bool var_11 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1137370394U;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)45;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3127186000U;
_Bool arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
