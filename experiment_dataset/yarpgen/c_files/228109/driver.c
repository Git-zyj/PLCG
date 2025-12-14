#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 9686725063562004615ULL;
short var_9 = (short)14271;
unsigned int var_13 = 2110485495U;
int zero = 0;
unsigned short var_15 = (unsigned short)14094;
int var_16 = 1681566455;
short var_17 = (short)-3106;
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
