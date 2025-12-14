#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)42450;
unsigned long long int var_10 = 14442464936029635533ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)4423;
unsigned int var_14 = 1921428854U;
unsigned char var_15 = (unsigned char)164;
_Bool var_16 = (_Bool)1;
long long int var_17 = 1893555594609976967LL;
unsigned short arr_0 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)8198;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
