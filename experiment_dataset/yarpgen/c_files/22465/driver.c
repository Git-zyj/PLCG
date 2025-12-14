#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)7919;
long long int var_6 = 7433104548814628108LL;
signed char var_12 = (signed char)24;
unsigned short var_14 = (unsigned short)24639;
unsigned long long int var_17 = 951024018782989855ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)213;
short var_20 = (short)-19078;
long long int var_21 = 7226449311342168190LL;
void init() {
}

void checksum() {
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
