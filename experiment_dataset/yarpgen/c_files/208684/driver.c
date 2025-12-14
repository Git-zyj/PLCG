#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-26;
int var_1 = -509285278;
unsigned char var_2 = (unsigned char)192;
unsigned char var_4 = (unsigned char)184;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 2380684088U;
unsigned int var_8 = 2697763049U;
int zero = 0;
short var_11 = (short)819;
int var_12 = 33497074;
short var_13 = (short)6764;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
