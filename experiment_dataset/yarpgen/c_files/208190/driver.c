#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-20071;
unsigned long long int var_3 = 18378162588284811929ULL;
unsigned int var_4 = 2738920657U;
int zero = 0;
long long int var_15 = 9000968835361902531LL;
unsigned int var_16 = 1290599120U;
signed char var_17 = (signed char)-22;
void init() {
}

void checksum() {
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
