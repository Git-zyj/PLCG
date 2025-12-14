#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 13677196828825742935ULL;
unsigned long long int var_10 = 5901986233674170254ULL;
_Bool var_11 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 9920775347737854168ULL;
unsigned long long int var_16 = 124310983810032799ULL;
int var_17 = 2035113629;
int zero = 0;
unsigned short var_18 = (unsigned short)6736;
int var_19 = 1879445177;
unsigned char var_20 = (unsigned char)5;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
