#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
unsigned short var_3 = (unsigned short)30682;
unsigned long long int var_4 = 17294163603458985155ULL;
unsigned long long int var_7 = 4712959912646913237ULL;
short var_9 = (short)27692;
int var_10 = 1717652791;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 3338990724U;
unsigned int var_14 = 2282386174U;
int zero = 0;
unsigned long long int var_15 = 2560647209939958690ULL;
unsigned char var_16 = (unsigned char)135;
long long int var_17 = -8783388565339669792LL;
unsigned long long int var_18 = 12798899459208609968ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
