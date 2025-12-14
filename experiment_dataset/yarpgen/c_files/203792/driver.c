#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2493954099U;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)12396;
int zero = 0;
unsigned int var_15 = 1302366843U;
long long int var_16 = -4047107909418349458LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
