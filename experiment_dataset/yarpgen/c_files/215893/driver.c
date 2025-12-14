#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)4;
unsigned long long int var_6 = 10836551714749724496ULL;
signed char var_9 = (signed char)-32;
int var_10 = 2037551094;
unsigned char var_11 = (unsigned char)197;
_Bool var_13 = (_Bool)0;
unsigned long long int var_15 = 7514052212800250130ULL;
unsigned long long int var_17 = 12549487676488266478ULL;
unsigned long long int var_19 = 11596885767830011770ULL;
int zero = 0;
short var_20 = (short)20923;
unsigned long long int var_21 = 6777653445013077402ULL;
_Bool var_22 = (_Bool)1;
int var_23 = 748460575;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
