#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2025;
unsigned short var_2 = (unsigned short)8194;
long long int var_3 = 5775521066148845453LL;
unsigned long long int var_6 = 14171051543508863354ULL;
unsigned long long int var_12 = 17055423378000447363ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)15004;
int var_15 = 1335329021;
int var_16 = 302255661;
long long int var_17 = -9208232995860750999LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
