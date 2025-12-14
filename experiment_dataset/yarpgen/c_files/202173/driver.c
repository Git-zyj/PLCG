#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-9186;
signed char var_11 = (signed char)5;
short var_12 = (short)15528;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 8453105795444531701LL;
void init() {
}

void checksum() {
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
