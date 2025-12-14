#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7126871993898268324LL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)5938;
unsigned char var_10 = (unsigned char)160;
short var_17 = (short)28096;
unsigned int var_18 = 1253694012U;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
long long int var_22 = 4338045557879236900LL;
signed char var_23 = (signed char)95;
unsigned int var_24 = 94079083U;
signed char arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)10;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
