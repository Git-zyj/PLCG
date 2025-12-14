#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)83;
short var_3 = (short)32558;
long long int var_4 = -5793745079353950038LL;
int var_9 = -442737077;
int var_15 = 2009571546;
int zero = 0;
int var_16 = 126775994;
long long int var_17 = -3011435146928225399LL;
unsigned char var_18 = (unsigned char)158;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
