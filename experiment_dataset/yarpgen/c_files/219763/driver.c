#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2010489552U;
short var_1 = (short)6018;
signed char var_2 = (signed char)96;
long long int var_3 = -1183914312833994924LL;
unsigned int var_4 = 4163080245U;
int var_6 = 1583332834;
unsigned int var_8 = 287156294U;
unsigned long long int var_9 = 10209602005975284122ULL;
unsigned short var_10 = (unsigned short)3073;
short var_11 = (short)-28592;
unsigned short var_12 = (unsigned short)53773;
int zero = 0;
int var_13 = -414528663;
short var_14 = (short)-8119;
long long int var_15 = 6561087780485361525LL;
long long int var_16 = -6280229058862728740LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
