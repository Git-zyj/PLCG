#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned int var_14 = 1301361623U;
unsigned short var_15 = (unsigned short)44780;
unsigned long long int var_17 = 14283859274925395759ULL;
int zero = 0;
unsigned int var_18 = 179484772U;
unsigned int var_19 = 1480459943U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
