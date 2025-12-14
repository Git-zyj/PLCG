#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -61639659;
unsigned char var_3 = (unsigned char)87;
unsigned long long int var_4 = 4880144121999872911ULL;
long long int var_6 = 4907600011339388790LL;
int var_9 = 801441598;
unsigned char var_10 = (unsigned char)50;
long long int var_11 = 5082880751430581163LL;
unsigned short var_14 = (unsigned short)48127;
int zero = 0;
unsigned char var_15 = (unsigned char)182;
unsigned char var_16 = (unsigned char)8;
void init() {
}

void checksum() {
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
