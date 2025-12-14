#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -102977145;
unsigned int var_1 = 1379277128U;
unsigned char var_2 = (unsigned char)55;
unsigned short var_3 = (unsigned short)24432;
unsigned short var_6 = (unsigned short)32554;
unsigned short var_7 = (unsigned short)25444;
signed char var_9 = (signed char)-12;
unsigned int var_12 = 2686396193U;
int zero = 0;
unsigned short var_13 = (unsigned short)52083;
unsigned int var_14 = 1112129952U;
signed char var_15 = (signed char)60;
short var_16 = (short)23642;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
