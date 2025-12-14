#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -2143473848;
unsigned char var_10 = (unsigned char)232;
unsigned int var_11 = 3718147881U;
int zero = 0;
short var_16 = (short)19588;
short var_17 = (short)-5255;
int var_18 = -1772858872;
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
