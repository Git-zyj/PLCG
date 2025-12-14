#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1582415387;
unsigned char var_7 = (unsigned char)3;
signed char var_8 = (signed char)-108;
long long int var_14 = -7813617671315187444LL;
int zero = 0;
signed char var_15 = (signed char)5;
int var_16 = 2075427249;
signed char var_17 = (signed char)-127;
long long int var_18 = 1800739557357006662LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
