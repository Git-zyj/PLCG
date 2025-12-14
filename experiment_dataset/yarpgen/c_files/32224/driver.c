#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15024170770868687447ULL;
unsigned int var_2 = 422438790U;
short var_3 = (short)-17656;
long long int var_6 = -653566969387537666LL;
long long int var_12 = -3294194000837917155LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1154951809U;
unsigned short var_16 = (unsigned short)39170;
void init() {
}

void checksum() {
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
