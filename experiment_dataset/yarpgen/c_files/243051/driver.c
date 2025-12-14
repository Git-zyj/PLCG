#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_3 = 1492935986572152745ULL;
unsigned char var_5 = (unsigned char)92;
unsigned long long int var_14 = 5735678761712289083ULL;
int zero = 0;
short var_15 = (short)-24274;
unsigned long long int var_16 = 1711333305308896895ULL;
unsigned int var_17 = 2581262059U;
void init() {
}

void checksum() {
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
