#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)16097;
short var_8 = (short)25386;
unsigned int var_10 = 3122542037U;
short var_14 = (short)9180;
short var_15 = (short)12584;
int zero = 0;
short var_16 = (short)-28753;
short var_17 = (short)5180;
void init() {
}

void checksum() {
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
