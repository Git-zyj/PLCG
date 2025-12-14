#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24306;
unsigned short var_1 = (unsigned short)2605;
unsigned int var_2 = 3236290495U;
unsigned long long int var_6 = 2138610988577260923ULL;
unsigned int var_12 = 3056747461U;
short var_13 = (short)-10644;
unsigned long long int var_16 = 8171730490703229590ULL;
long long int var_17 = 5937873674208877368LL;
unsigned short var_18 = (unsigned short)35636;
int zero = 0;
long long int var_19 = 3653883262231424655LL;
unsigned int var_20 = 4020089829U;
signed char var_21 = (signed char)55;
short var_22 = (short)4332;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
