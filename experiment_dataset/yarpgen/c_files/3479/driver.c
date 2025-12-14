#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 12286346430080851252ULL;
_Bool var_5 = (_Bool)0;
int var_8 = -920818295;
int var_12 = 1666913173;
int zero = 0;
unsigned int var_14 = 3386060537U;
unsigned int var_15 = 1659945901U;
short var_16 = (short)-30034;
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
