#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2141042647037332433ULL;
unsigned long long int var_1 = 1567536321023834457ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 12879177877205834989ULL;
unsigned char var_7 = (unsigned char)197;
unsigned int var_12 = 2273288027U;
unsigned int var_13 = 1655110027U;
unsigned long long int var_14 = 9819370034191530025ULL;
int zero = 0;
long long int var_17 = -1798917663060557523LL;
unsigned int var_18 = 1884347781U;
unsigned long long int var_19 = 3880168511908220970ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
