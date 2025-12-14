#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)62;
short var_4 = (short)-22239;
long long int var_6 = -4632045061594175569LL;
long long int var_11 = -327168507164306561LL;
unsigned short var_18 = (unsigned short)52619;
int zero = 0;
long long int var_19 = -3060757074966485233LL;
unsigned int var_20 = 1362292060U;
unsigned short var_21 = (unsigned short)1317;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
