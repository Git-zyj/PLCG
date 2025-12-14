#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1591524248;
unsigned int var_1 = 3610545896U;
short var_5 = (short)-17868;
signed char var_7 = (signed char)(-127 - 1);
unsigned char var_11 = (unsigned char)134;
short var_13 = (short)23236;
int zero = 0;
short var_20 = (short)31279;
unsigned char var_21 = (unsigned char)109;
long long int var_22 = -5289860063833443019LL;
signed char var_23 = (signed char)77;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
