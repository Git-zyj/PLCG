#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13909;
unsigned int var_5 = 4104459620U;
int var_7 = -1020656053;
int var_10 = -1245678997;
int zero = 0;
int var_11 = 1179383537;
short var_12 = (short)-17523;
long long int var_13 = 8534302123523072448LL;
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
