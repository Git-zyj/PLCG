#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1831814568U;
long long int var_6 = -430533971700674921LL;
long long int var_7 = -5174684038779394801LL;
long long int var_8 = -4288422238246535770LL;
unsigned long long int var_12 = 4685635268214393681ULL;
int zero = 0;
unsigned int var_14 = 800040104U;
unsigned int var_15 = 1680064191U;
_Bool var_16 = (_Bool)0;
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
