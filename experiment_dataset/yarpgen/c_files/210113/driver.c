#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)96;
int var_1 = -743111328;
unsigned int var_3 = 2174401264U;
long long int var_5 = -3106267241249535164LL;
int var_7 = 919821274;
int zero = 0;
unsigned char var_11 = (unsigned char)85;
unsigned short var_12 = (unsigned short)8256;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
