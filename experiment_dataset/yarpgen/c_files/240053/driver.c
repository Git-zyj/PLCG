#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12520;
long long int var_3 = -2347805098013852693LL;
signed char var_7 = (signed char)-21;
unsigned char var_9 = (unsigned char)187;
short var_11 = (short)-22024;
int zero = 0;
long long int var_14 = 1423103826989553370LL;
unsigned short var_15 = (unsigned short)34978;
unsigned short var_16 = (unsigned short)6387;
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
