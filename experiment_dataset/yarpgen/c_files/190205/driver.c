#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16125;
int var_3 = -1841142267;
unsigned char var_4 = (unsigned char)159;
short var_5 = (short)14378;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 3799815004790401859ULL;
int zero = 0;
int var_12 = -1109070680;
short var_13 = (short)6334;
unsigned long long int var_14 = 18043656440172925536ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
