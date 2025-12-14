#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18084031420704930278ULL;
short var_5 = (short)3927;
long long int var_6 = -1028427706117836968LL;
unsigned long long int var_11 = 6520601708857743179ULL;
short var_14 = (short)1709;
short var_16 = (short)-3066;
int zero = 0;
int var_17 = 1677664891;
unsigned char var_18 = (unsigned char)129;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
