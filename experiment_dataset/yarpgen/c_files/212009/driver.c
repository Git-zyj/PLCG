#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -158183000;
unsigned char var_5 = (unsigned char)243;
signed char var_6 = (signed char)51;
signed char var_10 = (signed char)58;
unsigned long long int var_13 = 17851215855119233445ULL;
short var_14 = (short)25965;
int zero = 0;
unsigned long long int var_16 = 17171491008980560806ULL;
unsigned char var_17 = (unsigned char)207;
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
