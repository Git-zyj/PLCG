#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17162;
unsigned char var_4 = (unsigned char)56;
unsigned char var_8 = (unsigned char)157;
short var_11 = (short)14463;
unsigned short var_12 = (unsigned short)65292;
signed char var_14 = (signed char)61;
int zero = 0;
unsigned int var_17 = 3281583815U;
signed char var_18 = (signed char)-1;
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
