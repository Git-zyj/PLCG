#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 639363017841121638LL;
long long int var_7 = -3980877761253176093LL;
unsigned int var_8 = 1103533345U;
unsigned long long int var_10 = 13343162796315801404ULL;
unsigned short var_12 = (unsigned short)2348;
int zero = 0;
short var_13 = (short)31763;
_Bool var_14 = (_Bool)0;
long long int var_15 = -2880402793908135904LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
