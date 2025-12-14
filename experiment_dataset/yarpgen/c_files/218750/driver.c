#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2868062889U;
unsigned short var_1 = (unsigned short)25067;
short var_2 = (short)-15522;
unsigned char var_3 = (unsigned char)143;
long long int var_4 = -3903536715402723991LL;
unsigned short var_5 = (unsigned short)42794;
int var_10 = -430633500;
unsigned long long int var_11 = 5523238805489513080ULL;
int var_12 = 1466118139;
signed char var_13 = (signed char)35;
unsigned short var_16 = (unsigned short)37599;
unsigned char var_17 = (unsigned char)93;
int zero = 0;
short var_19 = (short)-19008;
signed char var_20 = (signed char)54;
unsigned int var_21 = 318786192U;
long long int var_22 = -6539148493209135845LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
