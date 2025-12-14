#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)-19540;
long long int var_4 = 8928000685313692862LL;
unsigned char var_5 = (unsigned char)197;
long long int var_9 = -6223102867078979077LL;
unsigned char var_10 = (unsigned char)131;
long long int var_13 = 2824767153562392788LL;
long long int var_16 = 7831278845414099591LL;
short var_17 = (short)-10070;
int zero = 0;
long long int var_18 = -1255607382752380937LL;
short var_19 = (short)11403;
unsigned char var_20 = (unsigned char)184;
long long int var_21 = 7510165577742603051LL;
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
