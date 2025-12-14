#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3059753784236827966ULL;
signed char var_3 = (signed char)15;
unsigned char var_4 = (unsigned char)253;
unsigned long long int var_7 = 14745561147693086129ULL;
short var_8 = (short)-13690;
int zero = 0;
signed char var_10 = (signed char)99;
int var_11 = -1739743460;
unsigned long long int var_12 = 5777388054630802331ULL;
long long int var_13 = 5140686742873206956LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
