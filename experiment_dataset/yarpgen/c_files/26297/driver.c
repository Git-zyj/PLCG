#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-26;
_Bool var_4 = (_Bool)0;
long long int var_6 = 2892750061739114559LL;
unsigned char var_7 = (unsigned char)108;
signed char var_11 = (signed char)-53;
int zero = 0;
short var_12 = (short)-18018;
short var_13 = (short)28506;
short var_14 = (short)-22566;
int var_15 = 1400588691;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
