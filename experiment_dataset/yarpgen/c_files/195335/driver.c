#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -627226215;
int var_1 = 973950615;
unsigned short var_2 = (unsigned short)61511;
short var_3 = (short)24399;
short var_4 = (short)24555;
unsigned int var_5 = 1623540404U;
signed char var_6 = (signed char)3;
int var_9 = 1797515525;
unsigned short var_12 = (unsigned short)37621;
unsigned short var_13 = (unsigned short)12941;
int zero = 0;
short var_15 = (short)12069;
unsigned long long int var_16 = 11054255170728765711ULL;
unsigned long long int var_17 = 6886509127474690623ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
