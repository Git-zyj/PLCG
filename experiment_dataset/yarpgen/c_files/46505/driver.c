#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)14144;
unsigned long long int var_13 = 9887692172577110488ULL;
int var_14 = 988053911;
short var_16 = (short)21794;
int zero = 0;
unsigned long long int var_18 = 6884535054757141019ULL;
unsigned long long int var_19 = 13199141306111399627ULL;
unsigned long long int var_20 = 16991162742474399909ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
