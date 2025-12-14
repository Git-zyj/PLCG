#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-17983;
long long int var_10 = -7957537760085343062LL;
long long int var_11 = -7100969496687256082LL;
short var_13 = (short)5087;
int zero = 0;
signed char var_15 = (signed char)93;
signed char var_16 = (signed char)96;
unsigned long long int var_17 = 18308863785787121816ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
