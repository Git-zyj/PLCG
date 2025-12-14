#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)47;
unsigned short var_4 = (unsigned short)43559;
unsigned char var_5 = (unsigned char)42;
unsigned short var_8 = (unsigned short)89;
long long int var_12 = 4191116926585556884LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 3882212663985050136ULL;
short var_16 = (short)-16936;
unsigned short var_17 = (unsigned short)13403;
void init() {
}

void checksum() {
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
