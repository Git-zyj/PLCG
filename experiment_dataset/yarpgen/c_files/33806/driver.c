#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 33138664U;
unsigned short var_3 = (unsigned short)37176;
int var_5 = -49745678;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)29866;
unsigned short var_12 = (unsigned short)14616;
int zero = 0;
unsigned short var_14 = (unsigned short)35325;
unsigned short var_15 = (unsigned short)64230;
short var_16 = (short)-7412;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
