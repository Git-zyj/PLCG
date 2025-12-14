#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2076595936752324756ULL;
short var_4 = (short)11606;
long long int var_5 = 8054140737549546854LL;
short var_8 = (short)956;
int zero = 0;
signed char var_14 = (signed char)28;
signed char var_15 = (signed char)126;
short var_16 = (short)4936;
unsigned short var_17 = (unsigned short)64979;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
