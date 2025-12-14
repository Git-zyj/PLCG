#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)28231;
unsigned short var_4 = (unsigned short)19539;
unsigned short var_5 = (unsigned short)34674;
short var_6 = (short)6410;
unsigned short var_10 = (unsigned short)35250;
signed char var_11 = (signed char)64;
signed char var_13 = (signed char)117;
short var_16 = (short)4333;
int zero = 0;
unsigned short var_17 = (unsigned short)54519;
unsigned short var_18 = (unsigned short)34224;
void init() {
}

void checksum() {
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
