#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54518;
unsigned int var_5 = 3714568216U;
long long int var_7 = 1166473737784653848LL;
int var_8 = 437249438;
unsigned short var_10 = (unsigned short)15562;
signed char var_12 = (signed char)95;
int var_13 = -2097404081;
int zero = 0;
unsigned long long int var_14 = 10075390489087071946ULL;
signed char var_15 = (signed char)-109;
unsigned long long int var_16 = 10110683747518872325ULL;
short var_17 = (short)-85;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
