#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)2571;
short var_7 = (short)-7;
short var_8 = (short)3225;
int zero = 0;
short var_12 = (short)1536;
unsigned int var_13 = 815257363U;
unsigned int var_14 = 1950408016U;
signed char var_15 = (signed char)-103;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
