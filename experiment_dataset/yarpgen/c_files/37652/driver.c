#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 4793092197215378048ULL;
short var_13 = (short)-18244;
int zero = 0;
unsigned short var_14 = (unsigned short)37356;
int var_15 = -1162262319;
short var_16 = (short)-2518;
unsigned char var_17 = (unsigned char)105;
unsigned long long int var_18 = 2773968424317988476ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
