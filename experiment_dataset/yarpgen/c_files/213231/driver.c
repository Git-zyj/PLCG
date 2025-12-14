#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_16 = (unsigned char)238;
int var_17 = 776380690;
short var_19 = (short)21989;
int zero = 0;
signed char var_20 = (signed char)26;
short var_21 = (short)-12204;
unsigned char var_22 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
