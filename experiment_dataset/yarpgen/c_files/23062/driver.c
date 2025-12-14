#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25605;
signed char var_4 = (signed char)38;
signed char var_5 = (signed char)50;
long long int var_6 = 6359963853910409157LL;
unsigned char var_7 = (unsigned char)159;
short var_8 = (short)32644;
unsigned long long int var_9 = 15470957252838659867ULL;
unsigned int var_10 = 3366879237U;
unsigned int var_14 = 404065433U;
signed char var_15 = (signed char)14;
int zero = 0;
unsigned short var_16 = (unsigned short)24775;
unsigned short var_17 = (unsigned short)3801;
int var_18 = 519692230;
unsigned int var_19 = 3817509401U;
long long int var_20 = 5311143824555218540LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
