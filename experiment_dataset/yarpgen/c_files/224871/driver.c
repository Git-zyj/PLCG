#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1126688270;
unsigned int var_4 = 2734721152U;
unsigned int var_10 = 3872744292U;
int zero = 0;
unsigned int var_15 = 2531781654U;
int var_16 = 487303535;
unsigned int var_17 = 1615716558U;
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
