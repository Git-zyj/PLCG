#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-111;
int var_2 = -838901927;
unsigned int var_4 = 2013393915U;
long long int var_7 = 444179868872466442LL;
short var_8 = (short)15911;
long long int var_10 = -9159541235824599910LL;
short var_11 = (short)7993;
unsigned char var_16 = (unsigned char)118;
int zero = 0;
int var_18 = 1371713890;
unsigned short var_19 = (unsigned short)63373;
void init() {
}

void checksum() {
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
