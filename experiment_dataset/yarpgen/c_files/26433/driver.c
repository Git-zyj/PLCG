#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)3607;
unsigned long long int var_10 = 15644843066946939844ULL;
signed char var_11 = (signed char)-113;
int zero = 0;
signed char var_12 = (signed char)-50;
unsigned short var_13 = (unsigned short)36144;
signed char var_14 = (signed char)0;
unsigned long long int var_15 = 15506605711472578896ULL;
unsigned long long int var_16 = 4732123322896494309ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
