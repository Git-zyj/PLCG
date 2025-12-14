#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)2518;
unsigned char var_7 = (unsigned char)9;
unsigned long long int var_10 = 14728843687013826572ULL;
unsigned long long int var_11 = 1144627396006979320ULL;
unsigned short var_13 = (unsigned short)39937;
int zero = 0;
long long int var_15 = -4935805112424944676LL;
long long int var_16 = -4762388972310749165LL;
short var_17 = (short)-17134;
unsigned short var_18 = (unsigned short)31304;
void init() {
}

void checksum() {
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
