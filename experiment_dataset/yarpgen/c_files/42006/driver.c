#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19758;
unsigned long long int var_4 = 16948261660021776809ULL;
unsigned int var_11 = 1054283115U;
unsigned short var_13 = (unsigned short)63229;
unsigned long long int var_14 = 5485472882992456236ULL;
int zero = 0;
unsigned int var_15 = 747083238U;
unsigned long long int var_16 = 9437245165329999428ULL;
short var_17 = (short)15097;
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
