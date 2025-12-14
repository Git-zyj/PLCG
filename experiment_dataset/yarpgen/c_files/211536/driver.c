#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)4255;
unsigned char var_6 = (unsigned char)54;
int var_7 = -1647921161;
unsigned short var_8 = (unsigned short)37473;
unsigned int var_15 = 3410652386U;
signed char var_16 = (signed char)34;
int zero = 0;
int var_17 = -210694567;
signed char var_18 = (signed char)-114;
unsigned int var_19 = 1444347037U;
unsigned int var_20 = 338758327U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
