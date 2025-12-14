#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2415;
unsigned long long int var_2 = 15897716556738096792ULL;
short var_7 = (short)-22679;
unsigned short var_8 = (unsigned short)57621;
long long int var_12 = -691404686842804945LL;
int zero = 0;
unsigned long long int var_15 = 7245123730308522965ULL;
unsigned char var_16 = (unsigned char)142;
short var_17 = (short)3116;
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
