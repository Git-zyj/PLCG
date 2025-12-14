#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4180791955U;
unsigned int var_1 = 4129518809U;
_Bool var_6 = (_Bool)0;
short var_14 = (short)-17185;
unsigned long long int var_16 = 8806494904389520766ULL;
int zero = 0;
long long int var_17 = -6232261870985118456LL;
unsigned int var_18 = 591253069U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
