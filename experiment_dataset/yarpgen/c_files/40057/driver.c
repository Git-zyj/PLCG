#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = -9009289672155682829LL;
unsigned long long int var_3 = 3212974653671680492ULL;
short var_4 = (short)19339;
unsigned char var_5 = (unsigned char)196;
unsigned long long int var_8 = 14270540664113561488ULL;
unsigned char var_10 = (unsigned char)183;
short var_11 = (short)-12457;
int zero = 0;
unsigned short var_13 = (unsigned short)7804;
signed char var_14 = (signed char)-94;
unsigned int var_15 = 3883139164U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
