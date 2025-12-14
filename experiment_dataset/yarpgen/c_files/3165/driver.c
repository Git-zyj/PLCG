#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1096856029;
long long int var_4 = -4187860597364765430LL;
signed char var_5 = (signed char)-68;
signed char var_6 = (signed char)-61;
int var_8 = -1030239224;
long long int var_9 = -797309265633065231LL;
unsigned int var_12 = 266927450U;
unsigned int var_14 = 2212647355U;
int zero = 0;
int var_15 = -293185137;
signed char var_16 = (signed char)19;
void init() {
}

void checksum() {
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
