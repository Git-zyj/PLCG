#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)85;
short var_3 = (short)2798;
long long int var_4 = 976935966132433644LL;
long long int var_6 = 2002635155020731339LL;
unsigned char var_8 = (unsigned char)30;
unsigned short var_9 = (unsigned short)54184;
int zero = 0;
short var_17 = (short)-32666;
unsigned int var_18 = 1449262862U;
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
