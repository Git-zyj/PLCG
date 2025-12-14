#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 779798703;
int var_6 = 1761543485;
unsigned int var_8 = 609194233U;
int zero = 0;
short var_12 = (short)-27359;
unsigned long long int var_13 = 2372151642894830099ULL;
signed char var_14 = (signed char)-17;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
