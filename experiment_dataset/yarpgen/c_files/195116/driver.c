#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1865169167U;
unsigned short var_4 = (unsigned short)52775;
int var_5 = -973869491;
_Bool var_6 = (_Bool)1;
int var_7 = -1124548217;
int var_8 = -944348534;
short var_9 = (short)20923;
unsigned int var_10 = 3668754469U;
unsigned long long int var_11 = 2890961452298388085ULL;
int zero = 0;
long long int var_13 = 6268171268330019314LL;
signed char var_14 = (signed char)115;
_Bool var_15 = (_Bool)0;
short var_16 = (short)18768;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
