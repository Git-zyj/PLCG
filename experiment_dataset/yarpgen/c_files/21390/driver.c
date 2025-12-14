#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)44;
unsigned short var_1 = (unsigned short)5651;
short var_2 = (short)-14553;
unsigned char var_3 = (unsigned char)112;
long long int var_5 = -3790544299524724412LL;
unsigned int var_6 = 3311251935U;
unsigned int var_7 = 134427398U;
unsigned long long int var_8 = 17852895964351472118ULL;
unsigned int var_9 = 3809955238U;
long long int var_10 = -7699649046678204463LL;
int zero = 0;
short var_11 = (short)-29402;
unsigned short var_12 = (unsigned short)23968;
unsigned char var_13 = (unsigned char)178;
unsigned int var_14 = 1538322320U;
unsigned int var_15 = 923321201U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
