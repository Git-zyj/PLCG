#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)42667;
int var_6 = 1511280801;
short var_7 = (short)2319;
unsigned short var_12 = (unsigned short)54332;
int var_14 = 1987233936;
short var_15 = (short)22325;
int zero = 0;
signed char var_20 = (signed char)-101;
unsigned long long int var_21 = 1821935399659395460ULL;
unsigned long long int var_22 = 16899806613681216639ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
