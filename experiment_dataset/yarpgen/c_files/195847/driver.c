#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1884187530U;
int var_4 = -1747700646;
long long int var_7 = 3368924454734139844LL;
int var_8 = -787651351;
long long int var_9 = -4685928080091093187LL;
long long int var_11 = -5565194706426663961LL;
long long int var_12 = 2864381462283447864LL;
int zero = 0;
long long int var_13 = 393891208217137760LL;
signed char var_14 = (signed char)19;
unsigned short var_15 = (unsigned short)30328;
unsigned short var_16 = (unsigned short)57955;
unsigned short var_17 = (unsigned short)38950;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
