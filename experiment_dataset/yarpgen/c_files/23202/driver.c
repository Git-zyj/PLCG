#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4730731715535749004LL;
unsigned int var_6 = 1197087330U;
unsigned int var_15 = 3698046011U;
int zero = 0;
unsigned int var_16 = 1866302045U;
long long int var_17 = 2953695787814267893LL;
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
