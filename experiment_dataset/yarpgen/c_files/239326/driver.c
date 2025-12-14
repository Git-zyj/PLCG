#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2530158326518949297LL;
int var_4 = 1389251569;
short var_7 = (short)-18729;
int zero = 0;
short var_13 = (short)-16849;
long long int var_14 = 7819480033924012807LL;
short var_15 = (short)27901;
void init() {
}

void checksum() {
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
