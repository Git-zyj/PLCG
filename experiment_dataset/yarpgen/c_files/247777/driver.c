#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-29080;
long long int var_3 = 4403873078014825253LL;
unsigned long long int var_6 = 9526905861890335166ULL;
long long int var_8 = 3257739867120042229LL;
int var_9 = 30088049;
unsigned int var_10 = 1870688251U;
unsigned short var_11 = (unsigned short)48682;
int zero = 0;
unsigned int var_13 = 4188988196U;
unsigned long long int var_14 = 13789672217874095473ULL;
short var_15 = (short)-9626;
short var_16 = (short)-7233;
unsigned char var_17 = (unsigned char)175;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
