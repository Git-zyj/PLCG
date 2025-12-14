#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)134;
unsigned int var_6 = 2026792809U;
unsigned long long int var_16 = 15545415512540033931ULL;
int zero = 0;
unsigned int var_19 = 1488292070U;
unsigned int var_20 = 2552630948U;
short var_21 = (short)17510;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
