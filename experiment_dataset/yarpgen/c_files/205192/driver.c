#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)22;
unsigned int var_1 = 1545352443U;
short var_2 = (short)-1324;
short var_4 = (short)10584;
short var_5 = (short)22923;
unsigned int var_6 = 1234316237U;
signed char var_8 = (signed char)17;
unsigned long long int var_10 = 3596135045743899529ULL;
int zero = 0;
signed char var_11 = (signed char)-47;
unsigned int var_12 = 1122239885U;
short var_13 = (short)21495;
int var_14 = -1938527328;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
