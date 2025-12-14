#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)27116;
unsigned short var_6 = (unsigned short)42051;
int var_15 = -984225033;
unsigned long long int var_16 = 15244978887752825537ULL;
int zero = 0;
short var_17 = (short)5667;
int var_18 = 1138023595;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
