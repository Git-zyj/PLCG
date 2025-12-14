#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8568566419770801101LL;
int var_8 = 1614387141;
int var_10 = 226014276;
signed char var_11 = (signed char)-30;
int zero = 0;
short var_14 = (short)-32317;
long long int var_15 = -4576541197241166236LL;
unsigned short var_16 = (unsigned short)54006;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
