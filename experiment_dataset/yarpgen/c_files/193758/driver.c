#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 365202529U;
unsigned short var_1 = (unsigned short)37156;
signed char var_2 = (signed char)126;
unsigned char var_5 = (unsigned char)19;
unsigned int var_6 = 4127455625U;
unsigned char var_10 = (unsigned char)168;
unsigned short var_13 = (unsigned short)19071;
short var_14 = (short)-31669;
int zero = 0;
long long int var_15 = 151021228631616142LL;
unsigned int var_16 = 1950268726U;
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
