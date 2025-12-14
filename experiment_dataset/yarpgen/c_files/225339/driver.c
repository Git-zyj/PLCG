#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 774844076;
unsigned short var_2 = (unsigned short)55979;
int var_5 = 1448916310;
int var_8 = -613996681;
long long int var_10 = -8434576919275867363LL;
int zero = 0;
int var_11 = -581401182;
int var_12 = -1464324979;
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
