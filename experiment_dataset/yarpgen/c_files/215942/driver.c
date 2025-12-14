#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_3 = 1414907338;
unsigned short var_10 = (unsigned short)40936;
unsigned short var_13 = (unsigned short)26527;
int var_14 = 2038069565;
unsigned int var_15 = 4068165818U;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_18 = -1400277453;
unsigned int var_19 = 1206845609U;
int var_20 = 1685788400;
unsigned int var_21 = 1086193656U;
unsigned short var_22 = (unsigned short)40977;
int var_23 = 1854336825;
unsigned short arr_0 [24] [24] ;
unsigned char arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)13793;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)90;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
