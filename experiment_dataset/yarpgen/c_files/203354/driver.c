#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7897;
unsigned char var_2 = (unsigned char)30;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-89;
_Bool var_14 = (_Bool)0;
unsigned char var_17 = (unsigned char)31;
int zero = 0;
signed char var_19 = (signed char)-91;
short var_20 = (short)7170;
void init() {
}

void checksum() {
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
