#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1568192644;
short var_5 = (short)27023;
_Bool var_7 = (_Bool)1;
short var_8 = (short)24530;
unsigned char var_13 = (unsigned char)55;
int zero = 0;
unsigned long long int var_15 = 10447348671986521623ULL;
short var_16 = (short)-8600;
short var_17 = (short)-6780;
unsigned char var_18 = (unsigned char)218;
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
