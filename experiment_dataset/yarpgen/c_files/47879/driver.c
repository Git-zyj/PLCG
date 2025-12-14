#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)99;
unsigned char var_2 = (unsigned char)132;
long long int var_6 = 2753153522638263348LL;
unsigned char var_11 = (unsigned char)8;
unsigned char var_12 = (unsigned char)193;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 18435406189831480752ULL;
long long int var_15 = -5217926624869800050LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
