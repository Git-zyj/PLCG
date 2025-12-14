#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-50;
signed char var_3 = (signed char)111;
signed char var_4 = (signed char)119;
int var_8 = -1562734513;
int zero = 0;
unsigned long long int var_10 = 9025572567462207275ULL;
unsigned long long int var_11 = 9350896620908885865ULL;
int var_12 = -1425294632;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
