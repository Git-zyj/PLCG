#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8211143803371026915ULL;
unsigned int var_3 = 3717697754U;
unsigned int var_8 = 3715721664U;
unsigned long long int var_9 = 3828517719491842488ULL;
unsigned short var_11 = (unsigned short)23198;
long long int var_12 = 6793017930213737466LL;
int zero = 0;
unsigned short var_14 = (unsigned short)55549;
signed char var_15 = (signed char)63;
short var_16 = (short)-30230;
unsigned long long int var_17 = 4102645034867420370ULL;
short var_18 = (short)-32122;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
