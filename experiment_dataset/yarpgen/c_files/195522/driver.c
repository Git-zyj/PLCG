#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)48;
unsigned int var_8 = 1345282012U;
unsigned char var_12 = (unsigned char)84;
int zero = 0;
unsigned long long int var_16 = 8897281252163763045ULL;
unsigned long long int var_17 = 8286886135309239823ULL;
void init() {
}

void checksum() {
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
