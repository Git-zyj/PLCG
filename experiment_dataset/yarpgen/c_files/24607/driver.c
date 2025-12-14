#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-26343;
unsigned int var_4 = 197516617U;
unsigned int var_5 = 2278176264U;
short var_8 = (short)21937;
signed char var_12 = (signed char)10;
int zero = 0;
signed char var_13 = (signed char)-24;
unsigned char var_14 = (unsigned char)67;
signed char var_15 = (signed char)104;
void init() {
}

void checksum() {
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
