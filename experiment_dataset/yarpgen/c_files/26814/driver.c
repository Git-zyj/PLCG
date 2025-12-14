#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)218;
short var_6 = (short)-17884;
short var_7 = (short)-7110;
unsigned short var_8 = (unsigned short)14427;
int zero = 0;
signed char var_10 = (signed char)-24;
int var_11 = 590223225;
unsigned char var_12 = (unsigned char)184;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
