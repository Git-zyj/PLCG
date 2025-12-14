#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)76;
short var_3 = (short)11401;
int var_5 = -14553273;
unsigned char var_6 = (unsigned char)134;
unsigned long long int var_7 = 16110318422332018851ULL;
short var_10 = (short)24158;
int zero = 0;
unsigned int var_11 = 4101511663U;
int var_12 = 1371341088;
int var_13 = -1957901891;
unsigned char var_14 = (unsigned char)184;
unsigned long long int var_15 = 10269683128910882999ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
