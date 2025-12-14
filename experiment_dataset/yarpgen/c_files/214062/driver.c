#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-30669;
unsigned short var_11 = (unsigned short)21727;
unsigned char var_14 = (unsigned char)101;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_17 = (short)-190;
signed char var_18 = (signed char)92;
unsigned int var_19 = 4255786042U;
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
