#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)-30541;
short var_6 = (short)-27360;
short var_8 = (short)-13656;
unsigned int var_9 = 2786752762U;
int var_14 = 28903244;
int zero = 0;
unsigned char var_15 = (unsigned char)62;
_Bool var_16 = (_Bool)0;
short var_17 = (short)26933;
unsigned char var_18 = (unsigned char)57;
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
