#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)160;
signed char var_6 = (signed char)-49;
unsigned char var_11 = (unsigned char)73;
int zero = 0;
int var_14 = -267183605;
unsigned char var_15 = (unsigned char)35;
unsigned long long int var_16 = 16922257045217473856ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
