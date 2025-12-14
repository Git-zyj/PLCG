#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)190;
signed char var_5 = (signed char)119;
short var_6 = (short)16817;
unsigned short var_8 = (unsigned short)27753;
int zero = 0;
unsigned char var_10 = (unsigned char)225;
unsigned short var_11 = (unsigned short)29464;
unsigned long long int var_12 = 1168279824163419809ULL;
unsigned short var_13 = (unsigned short)42204;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
