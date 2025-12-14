#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 916800725;
unsigned long long int var_1 = 12497925916868388590ULL;
short var_2 = (short)26549;
unsigned int var_3 = 602308552U;
unsigned int var_4 = 1460137057U;
signed char var_5 = (signed char)4;
unsigned char var_6 = (unsigned char)129;
int var_7 = 473219315;
signed char var_9 = (signed char)13;
signed char var_11 = (signed char)-93;
int zero = 0;
unsigned char var_12 = (unsigned char)85;
int var_13 = -1025304347;
unsigned char var_14 = (unsigned char)111;
unsigned int var_15 = 2917280192U;
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
