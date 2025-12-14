#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)36;
int var_1 = -753519091;
signed char var_8 = (signed char)76;
unsigned char var_9 = (unsigned char)234;
unsigned char var_11 = (unsigned char)36;
unsigned char var_14 = (unsigned char)235;
int zero = 0;
unsigned char var_17 = (unsigned char)116;
signed char var_18 = (signed char)35;
short var_19 = (short)-15124;
int var_20 = 1233482367;
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
