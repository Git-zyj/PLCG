#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12978546242701710640ULL;
short var_2 = (short)-19332;
int var_4 = 1333542022;
short var_6 = (short)23384;
unsigned char var_14 = (unsigned char)30;
unsigned char var_15 = (unsigned char)140;
int zero = 0;
long long int var_16 = 413655414408968871LL;
signed char var_17 = (signed char)95;
unsigned short var_18 = (unsigned short)52800;
long long int var_19 = -4320491732181734382LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
