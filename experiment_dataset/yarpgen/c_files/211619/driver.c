#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8580860993413708887LL;
int var_5 = 1758947248;
int var_6 = -545783029;
int zero = 0;
long long int var_10 = -719400427075556421LL;
unsigned long long int var_11 = 2266423984517123649ULL;
long long int var_12 = -8429206074488047584LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
