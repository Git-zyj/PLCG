#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 600764959;
unsigned char var_6 = (unsigned char)189;
unsigned short var_7 = (unsigned short)42571;
int var_8 = 1425665363;
int zero = 0;
short var_17 = (short)-1098;
signed char var_18 = (signed char)100;
unsigned int var_19 = 1862882905U;
signed char var_20 = (signed char)-85;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
