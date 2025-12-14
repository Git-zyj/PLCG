#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50284;
signed char var_3 = (signed char)-94;
signed char var_6 = (signed char)95;
int var_9 = -253469158;
unsigned short var_10 = (unsigned short)30561;
int zero = 0;
int var_12 = 540340459;
unsigned short var_13 = (unsigned short)55922;
signed char var_14 = (signed char)-17;
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
