#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34284;
long long int var_2 = 7201925719596641932LL;
signed char var_5 = (signed char)-96;
unsigned int var_6 = 2885049680U;
unsigned int var_8 = 2338856642U;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-30740;
long long int var_12 = -3509041376208877639LL;
int zero = 0;
long long int var_17 = 2375104512729672267LL;
unsigned char var_18 = (unsigned char)165;
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
