#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_4 = -4044338431357610486LL;
short var_6 = (short)-19641;
unsigned int var_7 = 3317454035U;
unsigned int var_8 = 959862453U;
unsigned char var_9 = (unsigned char)147;
long long int var_10 = 6949197213785815383LL;
unsigned long long int var_14 = 6953613021068057144ULL;
short var_16 = (short)-22298;
int zero = 0;
unsigned short var_18 = (unsigned short)39677;
unsigned int var_19 = 394777919U;
int var_20 = -456523994;
signed char var_21 = (signed char)110;
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
