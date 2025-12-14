#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2132533433;
long long int var_1 = -203855560807464385LL;
signed char var_3 = (signed char)84;
long long int var_6 = -4331478051754661498LL;
long long int var_9 = -5585053110075743708LL;
long long int var_10 = -81513705659179850LL;
int zero = 0;
int var_12 = -1885081862;
int var_13 = -1983879553;
unsigned short var_14 = (unsigned short)43896;
int var_15 = 1762431646;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
