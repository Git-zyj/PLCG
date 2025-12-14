#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15796722164727778168ULL;
short var_8 = (short)-12478;
signed char var_12 = (signed char)33;
unsigned short var_13 = (unsigned short)37026;
unsigned long long int var_17 = 11892458959767571559ULL;
int zero = 0;
unsigned long long int var_20 = 3131101525062479262ULL;
int var_21 = 1433889442;
unsigned long long int var_22 = 2170151285593916558ULL;
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
