#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3035461266U;
unsigned long long int var_2 = 2213478244983939351ULL;
int var_3 = -780134105;
unsigned int var_4 = 945859033U;
unsigned char var_5 = (unsigned char)16;
int var_10 = 1618730539;
unsigned char var_11 = (unsigned char)232;
unsigned long long int var_13 = 10733192633417778920ULL;
long long int var_14 = -1380480872594684167LL;
unsigned long long int var_15 = 4506730518021927629ULL;
long long int var_16 = -5114928849173853459LL;
int zero = 0;
unsigned char var_17 = (unsigned char)158;
int var_18 = 2034946570;
unsigned int var_19 = 1337250343U;
long long int var_20 = 2116059326355307949LL;
int var_21 = -55711658;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
