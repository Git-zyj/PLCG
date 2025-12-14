#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3238731564U;
int var_3 = 1433374821;
unsigned long long int var_6 = 11370119497431114227ULL;
long long int var_7 = -409103323496135651LL;
unsigned int var_8 = 3505957268U;
short var_11 = (short)1001;
long long int var_12 = -1605197998683734LL;
short var_15 = (short)6490;
int var_16 = -327272857;
int zero = 0;
unsigned int var_17 = 3871579567U;
int var_18 = 1801548371;
unsigned int var_19 = 1439105609U;
int var_20 = -46608158;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
