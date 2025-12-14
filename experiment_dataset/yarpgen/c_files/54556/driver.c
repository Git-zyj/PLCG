#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)144;
unsigned short var_2 = (unsigned short)103;
short var_3 = (short)7205;
unsigned int var_4 = 769861229U;
int zero = 0;
unsigned int var_13 = 2060687797U;
unsigned char var_14 = (unsigned char)96;
void init() {
}

void checksum() {
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
