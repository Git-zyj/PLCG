#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2943711854U;
unsigned int var_11 = 1686752987U;
unsigned int var_12 = 1641920538U;
unsigned char var_15 = (unsigned char)94;
unsigned long long int var_16 = 16074958753578278831ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)205;
long long int var_19 = -3267385601127491636LL;
unsigned long long int var_20 = 12934740873193482649ULL;
unsigned short var_21 = (unsigned short)22161;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
