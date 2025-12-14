#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2555101403U;
unsigned long long int var_4 = 2192791026639090279ULL;
long long int var_5 = -4117751391595660697LL;
short var_7 = (short)-28519;
int zero = 0;
int var_12 = 791803258;
short var_13 = (short)29613;
unsigned int var_14 = 1226043563U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
