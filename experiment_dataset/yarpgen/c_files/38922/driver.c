#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16642;
unsigned long long int var_1 = 1804778266483043858ULL;
signed char var_4 = (signed char)58;
signed char var_7 = (signed char)81;
short var_13 = (short)-9636;
unsigned int var_15 = 3917828886U;
unsigned short var_16 = (unsigned short)13576;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = -1658582184;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 9190624268419606833ULL;
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
