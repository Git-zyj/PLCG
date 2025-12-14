#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28778;
short var_1 = (short)-18919;
int var_3 = 1402221958;
signed char var_12 = (signed char)62;
signed char var_15 = (signed char)-91;
int zero = 0;
signed char var_16 = (signed char)28;
int var_17 = 60275890;
unsigned short var_18 = (unsigned short)30345;
signed char var_19 = (signed char)-25;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
