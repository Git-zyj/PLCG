#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1571719462;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)33;
short var_8 = (short)27876;
long long int var_12 = -6027014263964330887LL;
int var_14 = -1656496361;
unsigned short var_15 = (unsigned short)14116;
int zero = 0;
unsigned char var_18 = (unsigned char)134;
signed char var_19 = (signed char)-28;
signed char var_20 = (signed char)-36;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
