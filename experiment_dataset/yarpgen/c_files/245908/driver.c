#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2043302686;
unsigned char var_7 = (unsigned char)185;
signed char var_9 = (signed char)-79;
unsigned short var_10 = (unsigned short)35897;
unsigned char var_11 = (unsigned char)126;
unsigned int var_12 = 3698534000U;
int zero = 0;
signed char var_13 = (signed char)-33;
unsigned char var_14 = (unsigned char)129;
unsigned int var_15 = 447643983U;
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
