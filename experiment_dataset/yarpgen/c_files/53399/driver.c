#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2012392103587004912LL;
unsigned long long int var_3 = 13112989335226770291ULL;
unsigned char var_5 = (unsigned char)250;
int var_7 = 1667005350;
int zero = 0;
unsigned int var_11 = 2410879073U;
signed char var_12 = (signed char)14;
short var_13 = (short)30668;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
