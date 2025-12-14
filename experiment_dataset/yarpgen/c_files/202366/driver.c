#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10037929928807526256ULL;
long long int var_1 = 4055009843322484746LL;
int var_7 = 1664488941;
int zero = 0;
long long int var_15 = 7162846718693090091LL;
long long int var_16 = -1992022482169477035LL;
long long int var_17 = -4016109306118160314LL;
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
