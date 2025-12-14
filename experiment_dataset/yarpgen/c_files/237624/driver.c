#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7257;
unsigned short var_1 = (unsigned short)18839;
signed char var_2 = (signed char)127;
unsigned short var_4 = (unsigned short)29228;
signed char var_6 = (signed char)-119;
short var_7 = (short)28787;
signed char var_8 = (signed char)84;
signed char var_9 = (signed char)24;
_Bool var_13 = (_Bool)0;
signed char var_15 = (signed char)-48;
int zero = 0;
short var_16 = (short)-21954;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
