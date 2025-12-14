#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49283;
long long int var_2 = -376705876916830281LL;
unsigned long long int var_3 = 15600110676706551028ULL;
unsigned int var_4 = 3898386928U;
unsigned char var_6 = (unsigned char)41;
unsigned short var_10 = (unsigned short)659;
unsigned char var_13 = (unsigned char)240;
unsigned int var_15 = 3900524045U;
unsigned long long int var_16 = 14729438171740808645ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)44;
long long int var_18 = -6235360388325034217LL;
void init() {
}

void checksum() {
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
