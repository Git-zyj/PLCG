#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1781491018673127529ULL;
int var_2 = 1868278531;
long long int var_6 = -2899214727225621646LL;
short var_12 = (short)12108;
int zero = 0;
short var_13 = (short)-20920;
short var_14 = (short)10135;
unsigned long long int var_15 = 3866782529628166125ULL;
int var_16 = 1477298516;
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
