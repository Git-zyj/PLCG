#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59516;
short var_7 = (short)30694;
unsigned char var_8 = (unsigned char)98;
short var_12 = (short)28388;
long long int var_15 = -8472520232046219676LL;
int zero = 0;
short var_16 = (short)-31420;
unsigned char var_17 = (unsigned char)215;
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
