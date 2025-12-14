#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1680316225;
long long int var_12 = 9039077716465818889LL;
int zero = 0;
short var_13 = (short)-2697;
unsigned short var_14 = (unsigned short)42644;
int var_15 = 1077730338;
long long int var_16 = -2548261688509330762LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
