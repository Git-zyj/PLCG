#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12897545459765311684ULL;
int var_2 = -1072087980;
unsigned short var_6 = (unsigned short)50351;
unsigned int var_7 = 3427301932U;
int zero = 0;
unsigned short var_15 = (unsigned short)17052;
long long int var_16 = -2020285075354913650LL;
short var_17 = (short)-31996;
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
