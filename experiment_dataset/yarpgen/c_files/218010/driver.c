#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14306;
short var_1 = (short)32614;
unsigned short var_12 = (unsigned short)49596;
unsigned long long int var_19 = 476068723102807012ULL;
int zero = 0;
short var_20 = (short)-32055;
short var_21 = (short)-5468;
unsigned long long int var_22 = 7814247899238323437ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
