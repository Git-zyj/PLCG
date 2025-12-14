#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17769;
unsigned short var_2 = (unsigned short)52434;
unsigned char var_5 = (unsigned char)8;
unsigned int var_11 = 2258464788U;
signed char var_12 = (signed char)-117;
signed char var_13 = (signed char)(-127 - 1);
int zero = 0;
signed char var_20 = (signed char)-114;
unsigned int var_21 = 97415443U;
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
