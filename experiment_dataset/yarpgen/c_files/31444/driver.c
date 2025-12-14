#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)2382;
unsigned long long int var_11 = 11308083925021420047ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)56924;
short var_16 = (short)-26600;
unsigned long long int var_17 = 378448753830933338ULL;
unsigned long long int var_18 = 4101084209429529417ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
