#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_5 = (signed char)53;
unsigned short var_6 = (unsigned short)49527;
unsigned int var_7 = 1411321152U;
long long int var_8 = 8660257427790385728LL;
short var_10 = (short)-30991;
long long int var_12 = -5589243433158695937LL;
short var_13 = (short)6510;
unsigned int var_14 = 937304512U;
int zero = 0;
int var_15 = 1272835147;
short var_16 = (short)-14902;
_Bool var_17 = (_Bool)0;
unsigned short arr_0 [16] ;
unsigned short arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)30465;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)33351;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
