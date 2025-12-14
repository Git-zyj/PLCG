#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1641672601;
short var_6 = (short)-28953;
short var_8 = (short)11947;
short var_9 = (short)-28332;
unsigned long long int var_10 = 10193856893659816518ULL;
int zero = 0;
signed char var_12 = (signed char)-48;
signed char var_13 = (signed char)-122;
void init() {
}

void checksum() {
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
