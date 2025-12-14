#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)113;
signed char var_3 = (signed char)-48;
unsigned short var_4 = (unsigned short)28549;
int var_5 = -149617108;
long long int var_7 = -6356463111134891989LL;
int zero = 0;
long long int var_10 = 5621309219980197807LL;
int var_11 = 436101797;
unsigned long long int var_12 = 12219598234816862357ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
