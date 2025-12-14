#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2132914479;
int var_4 = 1539307577;
unsigned long long int var_6 = 1815389071471520231ULL;
unsigned long long int var_7 = 5137539453646398642ULL;
int var_8 = -1154059173;
int var_13 = -1915279175;
unsigned long long int var_14 = 1412730538821313697ULL;
int zero = 0;
unsigned long long int var_16 = 12502325696423336582ULL;
unsigned long long int var_17 = 17592592975967261688ULL;
unsigned long long int var_18 = 8668503862831126113ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
