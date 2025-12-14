#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 201170403;
unsigned char var_1 = (unsigned char)178;
unsigned char var_2 = (unsigned char)148;
signed char var_3 = (signed char)125;
int var_4 = 1732216635;
signed char var_5 = (signed char)-97;
int var_6 = 1917580302;
long long int var_8 = -643484499341879844LL;
long long int var_9 = 8610960864909996608LL;
signed char var_10 = (signed char)44;
signed char var_12 = (signed char)-53;
unsigned char var_13 = (unsigned char)160;
int zero = 0;
unsigned char var_14 = (unsigned char)158;
short var_15 = (short)-20185;
unsigned char var_16 = (unsigned char)154;
int var_17 = -2097134525;
signed char var_18 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
