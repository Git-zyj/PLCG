#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1299523563;
short var_13 = (short)-14348;
unsigned short var_18 = (unsigned short)33408;
int zero = 0;
unsigned short var_20 = (unsigned short)15461;
unsigned int var_21 = 186367424U;
unsigned int var_22 = 4066802760U;
unsigned int var_23 = 383229352U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
