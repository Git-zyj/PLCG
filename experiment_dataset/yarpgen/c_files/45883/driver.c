#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-22907;
short var_8 = (short)32284;
int var_10 = 810621158;
unsigned short var_12 = (unsigned short)25479;
int zero = 0;
short var_15 = (short)8802;
unsigned int var_16 = 608035303U;
unsigned short var_17 = (unsigned short)52802;
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
