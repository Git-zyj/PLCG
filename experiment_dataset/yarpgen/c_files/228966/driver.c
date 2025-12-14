#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29158;
unsigned int var_6 = 3518670868U;
unsigned long long int var_7 = 10514593143665648041ULL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 5437241807606073711LL;
int zero = 0;
unsigned char var_19 = (unsigned char)203;
unsigned int var_20 = 3294027810U;
int var_21 = 1675789099;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
