#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6686223149669559118ULL;
unsigned char var_10 = (unsigned char)30;
int var_11 = -1879391834;
unsigned short var_14 = (unsigned short)13008;
int zero = 0;
short var_18 = (short)-15180;
int var_19 = -1756608747;
unsigned short var_20 = (unsigned short)36962;
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
