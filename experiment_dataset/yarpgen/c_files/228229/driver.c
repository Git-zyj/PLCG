#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 817727382U;
unsigned short var_1 = (unsigned short)61916;
unsigned char var_3 = (unsigned char)221;
short var_4 = (short)-1614;
long long int var_6 = -1511732371668911159LL;
unsigned int var_8 = 3803739721U;
unsigned long long int var_11 = 9327032152067719994ULL;
unsigned int var_12 = 1289816475U;
signed char var_13 = (signed char)47;
int zero = 0;
signed char var_15 = (signed char)3;
long long int var_16 = -3857518249124932470LL;
unsigned char var_17 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
