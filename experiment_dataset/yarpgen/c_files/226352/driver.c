#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)181;
unsigned short var_2 = (unsigned short)39073;
unsigned short var_7 = (unsigned short)57859;
short var_9 = (short)30935;
unsigned short var_10 = (unsigned short)15892;
unsigned int var_14 = 4244358992U;
int zero = 0;
short var_16 = (short)32681;
unsigned short var_17 = (unsigned short)25300;
void init() {
}

void checksum() {
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
