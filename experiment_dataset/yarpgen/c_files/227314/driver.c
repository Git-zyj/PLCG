#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)126;
unsigned char var_2 = (unsigned char)99;
signed char var_3 = (signed char)56;
short var_5 = (short)13049;
int zero = 0;
signed char var_15 = (signed char)95;
unsigned int var_16 = 3003081164U;
void init() {
}

void checksum() {
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
