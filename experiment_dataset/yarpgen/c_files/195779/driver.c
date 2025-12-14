#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 104887576271893481LL;
short var_1 = (short)-9722;
short var_2 = (short)32380;
unsigned char var_3 = (unsigned char)47;
signed char var_4 = (signed char)-87;
unsigned char var_10 = (unsigned char)67;
unsigned char var_12 = (unsigned char)43;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-10548;
int zero = 0;
short var_16 = (short)9555;
short var_17 = (short)23062;
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
