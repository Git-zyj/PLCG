#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3831580002U;
unsigned char var_6 = (unsigned char)146;
unsigned int var_8 = 3322199279U;
long long int var_11 = -2882078016788996825LL;
long long int var_13 = -1487302748576916466LL;
int zero = 0;
short var_15 = (short)-14444;
unsigned long long int var_16 = 16323789380244148086ULL;
void init() {
}

void checksum() {
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
