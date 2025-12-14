#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2997;
int var_2 = -1076002140;
unsigned char var_5 = (unsigned char)62;
unsigned int var_6 = 1692703669U;
int var_8 = 1718694488;
unsigned int var_9 = 3879153335U;
long long int var_12 = -3767339470489508698LL;
int zero = 0;
short var_15 = (short)-2724;
long long int var_16 = -5166207117453590183LL;
unsigned short var_17 = (unsigned short)41146;
_Bool var_18 = (_Bool)1;
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
