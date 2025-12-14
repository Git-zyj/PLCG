#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15835739120909955888ULL;
unsigned char var_3 = (unsigned char)145;
signed char var_4 = (signed char)-8;
unsigned char var_5 = (unsigned char)30;
long long int var_6 = 8135734311772632646LL;
int var_7 = -454191171;
int zero = 0;
short var_12 = (short)-8778;
long long int var_13 = -2992875087045962396LL;
long long int var_14 = 4401622411359925722LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
