#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = 19152651;
int var_7 = -2124905821;
short var_9 = (short)-17273;
signed char var_10 = (signed char)-7;
short var_11 = (short)-20472;
int zero = 0;
unsigned short var_13 = (unsigned short)29265;
int var_14 = -771654259;
signed char var_15 = (signed char)95;
short var_16 = (short)-29116;
unsigned int var_17 = 3750147026U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
