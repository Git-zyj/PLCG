#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10395;
unsigned char var_8 = (unsigned char)59;
short var_13 = (short)-20711;
int zero = 0;
unsigned char var_18 = (unsigned char)21;
short var_19 = (short)8545;
unsigned char var_20 = (unsigned char)174;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
