#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 919951057U;
_Bool var_3 = (_Bool)0;
short var_13 = (short)31648;
unsigned char var_17 = (unsigned char)242;
int zero = 0;
unsigned long long int var_20 = 851375841569162015ULL;
short var_21 = (short)30475;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
