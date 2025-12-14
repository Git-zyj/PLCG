#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1260519022;
_Bool var_8 = (_Bool)0;
unsigned short var_11 = (unsigned short)30597;
int zero = 0;
short var_13 = (short)-22154;
unsigned long long int var_14 = 728811110455931394ULL;
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
