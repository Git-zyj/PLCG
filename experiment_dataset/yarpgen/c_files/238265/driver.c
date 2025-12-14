#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 980081738052108916ULL;
int var_9 = -1765455270;
short var_10 = (short)3211;
unsigned int var_11 = 2956585616U;
unsigned char var_18 = (unsigned char)39;
int zero = 0;
signed char var_20 = (signed char)29;
signed char var_21 = (signed char)9;
int var_22 = 1352328625;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
