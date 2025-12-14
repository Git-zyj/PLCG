#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)20570;
unsigned short var_2 = (unsigned short)44812;
unsigned int var_3 = 1990465091U;
signed char var_6 = (signed char)-37;
unsigned short var_13 = (unsigned short)64079;
int zero = 0;
unsigned short var_14 = (unsigned short)6962;
long long int var_15 = 1799464151797031100LL;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
long long int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 3303689300804141971LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
