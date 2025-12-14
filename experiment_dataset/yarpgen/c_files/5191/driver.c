#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3214301813U;
signed char var_1 = (signed char)56;
signed char var_6 = (signed char)117;
int var_8 = 1371565317;
unsigned long long int var_9 = 1312045953992054485ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)188;
unsigned char var_11 = (unsigned char)233;
short var_12 = (short)14684;
signed char var_13 = (signed char)16;
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
