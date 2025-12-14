#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)77;
short var_4 = (short)-21254;
unsigned short var_11 = (unsigned short)7060;
int zero = 0;
long long int var_16 = -9087502250549970331LL;
unsigned int var_17 = 395732869U;
unsigned short var_18 = (unsigned short)18575;
short var_19 = (short)23990;
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
