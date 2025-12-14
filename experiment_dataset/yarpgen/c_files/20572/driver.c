#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)198;
short var_2 = (short)23818;
unsigned char var_3 = (unsigned char)48;
signed char var_14 = (signed char)-21;
unsigned char var_15 = (unsigned char)145;
int zero = 0;
unsigned char var_16 = (unsigned char)58;
unsigned char var_17 = (unsigned char)182;
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
