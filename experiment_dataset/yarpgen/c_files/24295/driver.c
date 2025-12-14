#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_4 = 2630400607U;
unsigned long long int var_6 = 6975672944479440505ULL;
unsigned int var_12 = 2008707449U;
unsigned long long int var_13 = 9968225518087828115ULL;
int zero = 0;
signed char var_14 = (signed char)-115;
short var_15 = (short)-12562;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)42792;
short var_18 = (short)-7555;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
