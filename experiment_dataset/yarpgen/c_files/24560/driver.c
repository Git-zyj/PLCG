#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17115;
int var_6 = 61184399;
unsigned int var_12 = 3990684452U;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_19 = (short)-16020;
unsigned int var_20 = 1525548469U;
unsigned int var_21 = 4014431314U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
