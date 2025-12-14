#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6858;
short var_3 = (short)-10890;
signed char var_7 = (signed char)10;
unsigned short var_9 = (unsigned short)36214;
unsigned long long int var_10 = 13523330599189130454ULL;
signed char var_11 = (signed char)-101;
int var_13 = 993701538;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)14489;
int var_19 = -17352395;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
