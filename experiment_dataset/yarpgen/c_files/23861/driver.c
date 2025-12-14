#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -865166120;
unsigned short var_5 = (unsigned short)26813;
int var_7 = -287279793;
short var_8 = (short)-8375;
unsigned int var_15 = 427869102U;
int var_18 = -66483229;
int zero = 0;
signed char var_20 = (signed char)-70;
unsigned int var_21 = 3855998584U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
