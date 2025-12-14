#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-30351;
signed char var_13 = (signed char)54;
int var_14 = 71908025;
_Bool var_15 = (_Bool)1;
short var_16 = (short)23665;
unsigned char var_18 = (unsigned char)171;
int zero = 0;
int var_19 = 203737641;
unsigned short var_20 = (unsigned short)16688;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
