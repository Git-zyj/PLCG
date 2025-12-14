#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)51374;
signed char var_14 = (signed char)77;
signed char var_16 = (signed char)2;
int zero = 0;
unsigned short var_17 = (unsigned short)59126;
signed char var_18 = (signed char)38;
unsigned short var_19 = (unsigned short)19410;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
