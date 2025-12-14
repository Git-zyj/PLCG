#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1599045605U;
signed char var_8 = (signed char)-40;
long long int var_12 = 2311990103651737101LL;
int zero = 0;
signed char var_18 = (signed char)51;
unsigned int var_19 = 245546566U;
short var_20 = (short)1528;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
