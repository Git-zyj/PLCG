#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)30973;
signed char var_7 = (signed char)-126;
short var_16 = (short)376;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 2697248040U;
signed char var_21 = (signed char)127;
void init() {
}

void checksum() {
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
