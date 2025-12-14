#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_4 = 1649286369637586578LL;
unsigned int var_5 = 3136001639U;
unsigned int var_6 = 451215156U;
unsigned int var_10 = 1905405098U;
unsigned char var_11 = (unsigned char)162;
unsigned char var_14 = (unsigned char)57;
int zero = 0;
int var_16 = -5150589;
signed char var_17 = (signed char)121;
void init() {
}

void checksum() {
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
