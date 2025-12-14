#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1322305294013019344ULL;
short var_1 = (short)23278;
int var_17 = 88383451;
int zero = 0;
int var_18 = 36216783;
unsigned char var_19 = (unsigned char)248;
short var_20 = (short)-9289;
unsigned char var_21 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
