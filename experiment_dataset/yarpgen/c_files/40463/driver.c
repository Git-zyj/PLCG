#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)48390;
unsigned short var_6 = (unsigned short)3532;
unsigned long long int var_12 = 3246411507073838818ULL;
int zero = 0;
int var_20 = -1530954284;
unsigned short var_21 = (unsigned short)61849;
int var_22 = -773155968;
int var_23 = 1457233051;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
