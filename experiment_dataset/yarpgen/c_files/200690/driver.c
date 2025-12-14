#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2408974696U;
unsigned int var_10 = 2026612239U;
unsigned int var_11 = 459865624U;
unsigned char var_14 = (unsigned char)169;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 14637526271401695756ULL;
unsigned int var_22 = 2936217020U;
unsigned int var_23 = 1636081841U;
unsigned int var_24 = 2878492316U;
short var_25 = (short)12075;
unsigned int var_26 = 2434353455U;
short arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-26261;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
