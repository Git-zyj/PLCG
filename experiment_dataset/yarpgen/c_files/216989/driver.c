#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1586759343;
unsigned int var_2 = 23225086U;
signed char var_3 = (signed char)91;
unsigned int var_5 = 3251018881U;
unsigned int var_6 = 3417236427U;
int zero = 0;
unsigned int var_11 = 1678487977U;
unsigned short var_12 = (unsigned short)54266;
unsigned short var_13 = (unsigned short)40486;
unsigned short var_14 = (unsigned short)59027;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
