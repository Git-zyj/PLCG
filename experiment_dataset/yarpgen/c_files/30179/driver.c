#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9488978296673765414ULL;
signed char var_3 = (signed char)64;
long long int var_6 = -5997262239288680777LL;
unsigned short var_8 = (unsigned short)44445;
int var_10 = 1368972999;
unsigned long long int var_12 = 8171703060270734856ULL;
int zero = 0;
unsigned int var_13 = 1683493535U;
int var_14 = 1486831601;
unsigned int var_15 = 1894806698U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
