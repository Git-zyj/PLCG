#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10673639672771610688ULL;
_Bool var_2 = (_Bool)1;
short var_4 = (short)-18816;
unsigned long long int var_5 = 6257358409021872184ULL;
short var_11 = (short)16874;
short var_13 = (short)-7892;
short var_15 = (short)-15626;
short var_16 = (short)-29022;
int zero = 0;
unsigned char var_17 = (unsigned char)51;
short var_18 = (short)-20583;
void init() {
}

void checksum() {
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
