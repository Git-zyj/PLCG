#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 77778935U;
unsigned long long int var_1 = 12461028262844748366ULL;
int var_5 = -1877665276;
int var_8 = 967059230;
unsigned long long int var_12 = 12107488777534235513ULL;
int zero = 0;
unsigned int var_19 = 693767778U;
short var_20 = (short)16464;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
