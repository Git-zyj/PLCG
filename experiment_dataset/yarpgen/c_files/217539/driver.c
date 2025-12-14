#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -565075434;
long long int var_6 = 7997574181325240241LL;
unsigned char var_8 = (unsigned char)182;
unsigned short var_9 = (unsigned short)42620;
int zero = 0;
unsigned int var_14 = 1682990548U;
short var_15 = (short)30964;
long long int var_16 = -7137186200631731600LL;
signed char var_17 = (signed char)7;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
