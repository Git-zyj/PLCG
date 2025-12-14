#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21204;
long long int var_2 = -8264425639556440706LL;
unsigned char var_4 = (unsigned char)41;
unsigned short var_5 = (unsigned short)37701;
signed char var_7 = (signed char)81;
unsigned long long int var_11 = 13098469388311613384ULL;
unsigned char var_13 = (unsigned char)59;
unsigned long long int var_14 = 9687783210444398070ULL;
unsigned int var_15 = 2731979530U;
int zero = 0;
short var_16 = (short)-13166;
unsigned short var_17 = (unsigned short)33241;
unsigned int var_18 = 333424411U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
