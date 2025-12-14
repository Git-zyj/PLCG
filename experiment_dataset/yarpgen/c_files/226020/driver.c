#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)6;
unsigned long long int var_9 = 1724758472309593833ULL;
unsigned short var_13 = (unsigned short)55477;
int zero = 0;
unsigned int var_15 = 771201560U;
unsigned short var_16 = (unsigned short)62568;
int var_17 = -1354580095;
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
