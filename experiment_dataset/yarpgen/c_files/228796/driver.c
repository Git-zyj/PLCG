#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1663071115U;
unsigned int var_6 = 3906146159U;
long long int var_8 = 3895476431025514747LL;
int var_9 = -1946762368;
int zero = 0;
int var_14 = 197482583;
int var_15 = -202794196;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
