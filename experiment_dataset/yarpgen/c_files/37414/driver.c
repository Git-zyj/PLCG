#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1767442337U;
unsigned int var_3 = 2363708479U;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)-15;
unsigned char var_12 = (unsigned char)224;
short var_13 = (short)10371;
long long int var_14 = 1690880046847502656LL;
unsigned int var_15 = 2671451459U;
int zero = 0;
signed char var_16 = (signed char)-72;
unsigned short var_17 = (unsigned short)8429;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
