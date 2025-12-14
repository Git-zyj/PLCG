#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2883048171117577988LL;
unsigned char var_1 = (unsigned char)179;
short var_5 = (short)8661;
unsigned long long int var_6 = 2047427337284413077ULL;
int zero = 0;
unsigned int var_10 = 270023846U;
unsigned char var_11 = (unsigned char)226;
unsigned int var_12 = 1104627422U;
short var_13 = (short)6340;
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
