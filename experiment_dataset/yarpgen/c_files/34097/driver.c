#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45472;
int var_1 = 1713520511;
long long int var_2 = -3728980150437278832LL;
unsigned int var_4 = 751385087U;
unsigned short var_7 = (unsigned short)24215;
unsigned long long int var_9 = 3043495078418516603ULL;
unsigned char var_10 = (unsigned char)237;
unsigned short var_11 = (unsigned short)29598;
int zero = 0;
long long int var_12 = 3050610126198598776LL;
unsigned short var_13 = (unsigned short)6865;
unsigned int var_14 = 3910574002U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
