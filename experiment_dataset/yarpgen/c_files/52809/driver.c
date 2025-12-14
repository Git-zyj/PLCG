#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)6519;
unsigned short var_3 = (unsigned short)56120;
unsigned short var_4 = (unsigned short)34736;
signed char var_11 = (signed char)-30;
int var_15 = -1047406193;
int zero = 0;
short var_19 = (short)16192;
unsigned int var_20 = 1115902065U;
unsigned int var_21 = 1551053637U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
