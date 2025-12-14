#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -4919822306692966833LL;
long long int var_9 = -4028353377928093241LL;
int zero = 0;
long long int var_15 = 3636482620151097533LL;
long long int var_16 = 6438849965681016547LL;
long long int var_17 = 6569644345564853997LL;
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
