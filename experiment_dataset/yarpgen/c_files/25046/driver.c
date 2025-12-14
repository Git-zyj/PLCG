#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43377;
unsigned short var_4 = (unsigned short)26618;
unsigned short var_7 = (unsigned short)24873;
_Bool var_13 = (_Bool)1;
long long int var_16 = -6800730985157021736LL;
int zero = 0;
short var_19 = (short)-4721;
int var_20 = 2050710440;
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
