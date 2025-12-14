#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-921;
int var_3 = -1519087952;
unsigned short var_4 = (unsigned short)1648;
unsigned short var_7 = (unsigned short)12705;
long long int var_12 = 1264012550889497464LL;
int zero = 0;
unsigned short var_13 = (unsigned short)2211;
signed char var_14 = (signed char)55;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1695804977U;
short arr_0 [15] ;
short arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)8826;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)13410;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
