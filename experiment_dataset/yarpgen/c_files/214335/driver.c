#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)35;
unsigned short var_6 = (unsigned short)29175;
signed char var_8 = (signed char)63;
signed char var_10 = (signed char)-17;
int zero = 0;
unsigned short var_12 = (unsigned short)45254;
unsigned long long int var_13 = 6164389083393670106ULL;
long long int var_14 = 5485422617095342017LL;
unsigned int var_15 = 1466690516U;
long long int var_16 = -3358142165686313374LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
