#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)241;
unsigned int var_5 = 2347677046U;
unsigned long long int var_9 = 13483255862201010764ULL;
unsigned long long int var_10 = 12430421422669265523ULL;
short var_12 = (short)-17382;
int zero = 0;
unsigned char var_15 = (unsigned char)14;
unsigned char var_16 = (unsigned char)243;
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
