#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1249515529;
unsigned long long int var_3 = 2108884260797437407ULL;
short var_4 = (short)27656;
unsigned short var_7 = (unsigned short)7954;
int zero = 0;
unsigned short var_16 = (unsigned short)27421;
unsigned short var_17 = (unsigned short)51221;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
