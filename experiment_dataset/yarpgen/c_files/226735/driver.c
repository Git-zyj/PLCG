#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 610156147U;
long long int var_4 = 2991366011498139004LL;
int var_6 = 1123935068;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 15057493918953705134ULL;
unsigned short var_10 = (unsigned short)53524;
long long int var_12 = -640402325502352612LL;
unsigned long long int var_13 = 7822601570812759438ULL;
unsigned long long int var_14 = 18046330039573600706ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)82;
int var_16 = 409438779;
unsigned long long int var_17 = 10299622724112975925ULL;
short var_18 = (short)-22221;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
