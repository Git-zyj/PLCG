#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)62;
unsigned long long int var_7 = 13543483688323671675ULL;
long long int var_10 = -2038331893890391237LL;
long long int var_14 = 4729034541990732137LL;
int zero = 0;
short var_15 = (short)-27147;
unsigned char var_16 = (unsigned char)188;
unsigned short var_17 = (unsigned short)36930;
unsigned int var_18 = 2976010099U;
unsigned char var_19 = (unsigned char)231;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
