#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1980607078U;
signed char var_5 = (signed char)3;
signed char var_7 = (signed char)-82;
unsigned int var_11 = 2565687362U;
short var_14 = (short)18711;
int zero = 0;
short var_15 = (short)-3959;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
