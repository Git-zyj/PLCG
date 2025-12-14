#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12497616464876348059ULL;
long long int var_1 = -5679424393054845011LL;
unsigned short var_2 = (unsigned short)30902;
short var_5 = (short)19755;
int var_6 = 739108594;
unsigned int var_7 = 450014560U;
unsigned int var_13 = 791669586U;
int zero = 0;
int var_14 = -724062514;
unsigned int var_15 = 2895136893U;
unsigned int var_16 = 1773594941U;
long long int var_17 = -5905293240744493428LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
