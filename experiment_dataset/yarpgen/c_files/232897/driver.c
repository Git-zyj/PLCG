#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11450;
short var_1 = (short)31765;
long long int var_4 = -5716922669340994076LL;
unsigned int var_5 = 555149643U;
unsigned char var_6 = (unsigned char)2;
unsigned short var_7 = (unsigned short)57498;
short var_8 = (short)17261;
unsigned short var_9 = (unsigned short)36142;
long long int var_12 = -2953980549117906219LL;
int zero = 0;
unsigned short var_13 = (unsigned short)2447;
short var_14 = (short)-12779;
unsigned int var_15 = 123130749U;
short var_16 = (short)30243;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
