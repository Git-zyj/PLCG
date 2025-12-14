#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)46;
long long int var_12 = -2154204220546533812LL;
int zero = 0;
long long int var_16 = 3985067117808980377LL;
unsigned char var_17 = (unsigned char)147;
long long int var_18 = -2068887351106996318LL;
unsigned short var_19 = (unsigned short)12912;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
