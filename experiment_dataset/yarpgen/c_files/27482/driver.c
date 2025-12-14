#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-28643;
unsigned char var_3 = (unsigned char)155;
unsigned long long int var_5 = 14562366111193065880ULL;
short var_8 = (short)19451;
unsigned long long int var_9 = 1074465140617566832ULL;
_Bool var_10 = (_Bool)0;
short var_13 = (short)15355;
int zero = 0;
unsigned char var_15 = (unsigned char)42;
long long int var_16 = -2817190640421271636LL;
unsigned char var_17 = (unsigned char)152;
short var_18 = (short)-26028;
int var_19 = 1357721140;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
