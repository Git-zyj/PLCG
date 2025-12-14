#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43402;
unsigned short var_3 = (unsigned short)46399;
unsigned short var_5 = (unsigned short)47587;
short var_6 = (short)-7352;
unsigned short var_7 = (unsigned short)41618;
int zero = 0;
int var_14 = -444684469;
unsigned short var_15 = (unsigned short)6305;
unsigned int var_16 = 2384155360U;
void init() {
}

void checksum() {
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
