#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21586;
long long int var_5 = 2376165905060988797LL;
short var_7 = (short)-7488;
unsigned int var_8 = 4079934072U;
int zero = 0;
unsigned char var_11 = (unsigned char)96;
unsigned int var_12 = 1642091804U;
signed char var_13 = (signed char)112;
void init() {
}

void checksum() {
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
