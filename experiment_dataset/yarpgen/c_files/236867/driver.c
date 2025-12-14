#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2736418089U;
int var_2 = -1308961391;
short var_4 = (short)-25446;
unsigned long long int var_7 = 12096407471148829213ULL;
unsigned char var_10 = (unsigned char)132;
int zero = 0;
signed char var_11 = (signed char)-114;
int var_12 = 1691475440;
unsigned short var_13 = (unsigned short)58336;
unsigned long long int var_14 = 9226476406160577086ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
