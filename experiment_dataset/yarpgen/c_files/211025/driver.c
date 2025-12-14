#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1476412699;
_Bool var_2 = (_Bool)1;
short var_7 = (short)13481;
short var_8 = (short)-22463;
int zero = 0;
signed char var_13 = (signed char)79;
signed char var_14 = (signed char)-111;
unsigned char var_15 = (unsigned char)129;
int var_16 = -1733374250;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
