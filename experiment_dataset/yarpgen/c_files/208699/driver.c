#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 551373659U;
long long int var_3 = -1026071680716724992LL;
unsigned long long int var_5 = 14648225004147245511ULL;
unsigned long long int var_6 = 15686780918381932393ULL;
signed char var_7 = (signed char)-41;
unsigned short var_9 = (unsigned short)16327;
signed char var_10 = (signed char)39;
long long int var_11 = -3568098677016147877LL;
unsigned short var_12 = (unsigned short)43420;
int zero = 0;
int var_13 = -1007865603;
unsigned short var_14 = (unsigned short)15306;
unsigned int var_15 = 3182386155U;
unsigned long long int var_16 = 2211247875014719757ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
