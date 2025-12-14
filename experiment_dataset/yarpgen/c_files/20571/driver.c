#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 747111422U;
short var_4 = (short)29999;
short var_5 = (short)-16225;
unsigned int var_6 = 3867796221U;
short var_7 = (short)4558;
unsigned int var_8 = 3686629998U;
unsigned int var_11 = 3827227526U;
int zero = 0;
int var_12 = -310585284;
short var_13 = (short)-12080;
unsigned int var_14 = 1097440298U;
short var_15 = (short)22405;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
