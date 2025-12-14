#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3156212331051427436LL;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)2832;
short var_6 = (short)-4641;
unsigned char var_7 = (unsigned char)247;
int var_8 = -1410652302;
int var_10 = 2054418916;
unsigned int var_12 = 1607712533U;
int zero = 0;
long long int var_13 = 8707783235757425497LL;
long long int var_14 = 67997077349025361LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
