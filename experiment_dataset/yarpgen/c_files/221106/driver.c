#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8053139104282195238ULL;
unsigned int var_4 = 802797081U;
unsigned int var_8 = 3400275124U;
short var_9 = (short)-29423;
unsigned short var_10 = (unsigned short)1685;
short var_13 = (short)-27145;
short var_14 = (short)-12204;
long long int var_15 = 4756034665185977940LL;
int var_17 = -1935596385;
long long int var_19 = -5304968705467888634LL;
int zero = 0;
unsigned char var_20 = (unsigned char)123;
long long int var_21 = 3145086936786817084LL;
signed char var_22 = (signed char)80;
void init() {
}

void checksum() {
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
