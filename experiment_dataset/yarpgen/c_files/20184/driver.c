#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 791646123;
short var_3 = (short)-24970;
short var_7 = (short)-8757;
unsigned int var_13 = 1340160395U;
unsigned int var_14 = 2679140212U;
short var_15 = (short)11232;
short var_18 = (short)12062;
int zero = 0;
unsigned short var_19 = (unsigned short)13984;
signed char var_20 = (signed char)-35;
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
