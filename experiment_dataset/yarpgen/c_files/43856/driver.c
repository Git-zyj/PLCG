#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-17885;
unsigned short var_10 = (unsigned short)30931;
long long int var_11 = -8593276528596970760LL;
unsigned char var_13 = (unsigned char)91;
short var_15 = (short)-29739;
unsigned int var_16 = 2894318386U;
int zero = 0;
unsigned long long int var_20 = 5851587750135656655ULL;
int var_21 = 67607248;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
