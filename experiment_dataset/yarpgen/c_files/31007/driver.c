#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-16;
unsigned char var_6 = (unsigned char)68;
short var_7 = (short)13620;
short var_10 = (short)-15724;
signed char var_11 = (signed char)-40;
short var_13 = (short)31005;
short var_14 = (short)1487;
unsigned char var_16 = (unsigned char)79;
int zero = 0;
signed char var_20 = (signed char)-9;
short var_21 = (short)2604;
unsigned char var_22 = (unsigned char)64;
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
