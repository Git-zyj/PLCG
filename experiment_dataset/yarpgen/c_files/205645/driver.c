#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-987;
unsigned int var_5 = 2174713502U;
short var_6 = (short)31392;
short var_7 = (short)26555;
int var_9 = 655163246;
int var_10 = 179389481;
short var_12 = (short)-29339;
unsigned int var_13 = 866670249U;
unsigned int var_15 = 2740182857U;
signed char var_17 = (signed char)49;
int zero = 0;
signed char var_18 = (signed char)5;
short var_19 = (short)-12208;
int var_20 = -482819224;
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
