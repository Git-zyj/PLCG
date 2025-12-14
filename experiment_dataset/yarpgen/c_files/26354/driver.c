#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)110;
int var_6 = -1228054067;
signed char var_10 = (signed char)-32;
unsigned short var_11 = (unsigned short)46657;
short var_12 = (short)-13103;
int zero = 0;
long long int var_19 = -4659452302759184112LL;
long long int var_20 = 1812011292043304274LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
