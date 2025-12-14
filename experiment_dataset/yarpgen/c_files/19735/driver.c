#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)121;
short var_1 = (short)-20902;
signed char var_4 = (signed char)116;
unsigned int var_5 = 2981038044U;
unsigned int var_10 = 2367013522U;
short var_11 = (short)-16780;
unsigned long long int var_12 = 2438786712179815216ULL;
signed char var_13 = (signed char)92;
signed char var_14 = (signed char)13;
int zero = 0;
unsigned short var_16 = (unsigned short)25472;
unsigned char var_17 = (unsigned char)250;
unsigned char var_18 = (unsigned char)108;
long long int var_19 = -1786642228771156696LL;
unsigned long long int var_20 = 1304048846354622967ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
