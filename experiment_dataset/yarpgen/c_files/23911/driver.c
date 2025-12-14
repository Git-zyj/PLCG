#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)19279;
signed char var_5 = (signed char)-126;
int var_6 = 2111322896;
unsigned short var_7 = (unsigned short)28843;
short var_10 = (short)-8968;
unsigned int var_13 = 1228880573U;
int zero = 0;
short var_14 = (short)-5023;
signed char var_15 = (signed char)-80;
short var_16 = (short)1741;
void init() {
}

void checksum() {
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
