#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7512990883909767992LL;
unsigned char var_3 = (unsigned char)113;
_Bool var_4 = (_Bool)0;
short var_5 = (short)2997;
long long int var_8 = -4869062113546540587LL;
short var_11 = (short)13513;
unsigned int var_15 = 1627920261U;
int zero = 0;
int var_16 = -611603223;
unsigned int var_17 = 567160083U;
void init() {
}

void checksum() {
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
