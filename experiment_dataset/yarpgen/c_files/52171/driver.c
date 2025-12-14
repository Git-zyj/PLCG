#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)55;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 3352380261U;
signed char var_12 = (signed char)37;
unsigned int var_13 = 3903667639U;
int zero = 0;
int var_14 = -1575116950;
short var_15 = (short)-14213;
unsigned short var_16 = (unsigned short)24845;
int var_17 = 484177828;
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
