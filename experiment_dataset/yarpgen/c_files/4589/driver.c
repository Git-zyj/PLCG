#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 4260194447U;
short var_5 = (short)-5768;
long long int var_7 = 7867408850203726857LL;
unsigned short var_10 = (unsigned short)24475;
int zero = 0;
unsigned short var_14 = (unsigned short)56589;
signed char var_15 = (signed char)52;
unsigned long long int var_16 = 1208512482351963478ULL;
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
