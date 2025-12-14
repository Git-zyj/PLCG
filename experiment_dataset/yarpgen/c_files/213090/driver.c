#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-25616;
signed char var_5 = (signed char)111;
short var_11 = (short)27438;
unsigned short var_14 = (unsigned short)61132;
int zero = 0;
signed char var_17 = (signed char)76;
unsigned short var_18 = (unsigned short)1762;
signed char var_19 = (signed char)-24;
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
