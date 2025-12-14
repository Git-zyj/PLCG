#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_10 = (unsigned short)55307;
short var_12 = (short)-2360;
unsigned long long int var_14 = 9195373029360078853ULL;
int zero = 0;
signed char var_16 = (signed char)15;
unsigned long long int var_17 = 12105277522906172159ULL;
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
