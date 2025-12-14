#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1491270525U;
signed char var_1 = (signed char)-80;
unsigned short var_2 = (unsigned short)26332;
unsigned short var_3 = (unsigned short)59353;
short var_5 = (short)-27862;
unsigned short var_10 = (unsigned short)38258;
unsigned char var_13 = (unsigned char)220;
unsigned int var_15 = 760652842U;
unsigned int var_19 = 3343519178U;
int zero = 0;
signed char var_20 = (signed char)-87;
unsigned int var_21 = 2894855560U;
short var_22 = (short)3995;
short var_23 = (short)-29616;
signed char var_24 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
