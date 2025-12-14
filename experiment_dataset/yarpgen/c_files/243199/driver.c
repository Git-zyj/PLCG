#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 4196557611U;
_Bool var_9 = (_Bool)0;
short var_11 = (short)-14273;
_Bool var_19 = (_Bool)1;
int zero = 0;
long long int var_20 = -4581274023961519385LL;
unsigned short var_21 = (unsigned short)56327;
int var_22 = 698243804;
unsigned char var_23 = (unsigned char)147;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
