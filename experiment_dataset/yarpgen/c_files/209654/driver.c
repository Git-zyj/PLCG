#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 974903418516765498LL;
unsigned short var_7 = (unsigned short)63337;
unsigned short var_10 = (unsigned short)29432;
int zero = 0;
short var_11 = (short)-24575;
signed char var_12 = (signed char)50;
long long int var_13 = -347949166306737439LL;
void init() {
}

void checksum() {
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
