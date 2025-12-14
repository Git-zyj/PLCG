#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 318251337U;
short var_3 = (short)-24755;
long long int var_5 = -7055585698160710314LL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-32696;
signed char var_10 = (signed char)-53;
int zero = 0;
unsigned short var_11 = (unsigned short)5787;
short var_12 = (short)-23352;
unsigned int var_13 = 3019910928U;
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
