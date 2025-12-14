#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)55;
unsigned int var_7 = 1602620079U;
int zero = 0;
unsigned long long int var_10 = 10988384630440919807ULL;
unsigned long long int var_11 = 11233064265554479552ULL;
unsigned long long int var_12 = 13726578652783630828ULL;
unsigned short var_13 = (unsigned short)37387;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
