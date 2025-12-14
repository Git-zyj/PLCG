#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4040035939840912651LL;
unsigned long long int var_3 = 11537285948191055083ULL;
unsigned long long int var_5 = 1488118158132527641ULL;
long long int var_6 = 2335754894505526260LL;
_Bool var_8 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_15 = 801873674;
long long int var_16 = -8900531294538688799LL;
void init() {
}

void checksum() {
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
