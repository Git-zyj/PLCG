#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8666171554446483167LL;
short var_5 = (short)11088;
long long int var_10 = 981108447976842471LL;
unsigned long long int var_11 = 16881566511811886084ULL;
long long int var_13 = 4291561430952675010LL;
short var_14 = (short)-14522;
short var_16 = (short)-32117;
long long int var_19 = -2468571772768080280LL;
int zero = 0;
long long int var_20 = 7207919512479498540LL;
unsigned char var_21 = (unsigned char)52;
unsigned int var_22 = 283518157U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
