#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)187;
unsigned short var_6 = (unsigned short)19031;
int var_8 = 1376841008;
int var_9 = 1579591656;
int zero = 0;
signed char var_14 = (signed char)37;
long long int var_15 = -5701721294969988896LL;
unsigned char var_16 = (unsigned char)165;
_Bool var_17 = (_Bool)1;
long long int var_18 = 6220144912095741991LL;
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
