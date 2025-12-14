#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45599;
signed char var_1 = (signed char)-8;
unsigned short var_2 = (unsigned short)16819;
signed char var_8 = (signed char)-61;
short var_11 = (short)30521;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)47927;
unsigned long long int var_16 = 6890797413697926894ULL;
unsigned short var_17 = (unsigned short)56537;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 270801400576399576ULL;
signed char var_20 = (signed char)-3;
unsigned long long int var_21 = 14490741489396930527ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
