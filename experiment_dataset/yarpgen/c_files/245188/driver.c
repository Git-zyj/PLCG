#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -879992103214674698LL;
int var_1 = -64285212;
long long int var_2 = -6945427764184208789LL;
unsigned int var_3 = 2976672083U;
short var_5 = (short)-1070;
unsigned short var_6 = (unsigned short)33617;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)11724;
int zero = 0;
unsigned int var_12 = 2925959377U;
unsigned short var_13 = (unsigned short)52466;
short var_14 = (short)-29;
unsigned long long int var_15 = 11149172812167309678ULL;
unsigned short var_16 = (unsigned short)24873;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
