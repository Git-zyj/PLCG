#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4178304495494925233ULL;
int var_1 = 1636387811;
short var_2 = (short)21030;
unsigned char var_4 = (unsigned char)172;
short var_6 = (short)-30348;
int zero = 0;
unsigned int var_10 = 1611125688U;
unsigned char var_11 = (unsigned char)135;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
