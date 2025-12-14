#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 1657288283;
long long int var_11 = -6700147720989798741LL;
signed char var_13 = (signed char)51;
unsigned int var_15 = 1344277870U;
int zero = 0;
int var_16 = -2007242983;
signed char var_17 = (signed char)70;
void init() {
}

void checksum() {
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
