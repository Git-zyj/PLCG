#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)8045;
int var_5 = 823824479;
unsigned int var_6 = 198873512U;
short var_9 = (short)-644;
short var_10 = (short)-23482;
short var_12 = (short)-7989;
unsigned char var_13 = (unsigned char)94;
int var_14 = 1002074186;
int zero = 0;
short var_18 = (short)4799;
unsigned int var_19 = 862426043U;
short var_20 = (short)-5767;
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
