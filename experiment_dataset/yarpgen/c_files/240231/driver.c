#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-28;
int var_2 = 358806877;
long long int var_3 = -1857400173003055185LL;
unsigned char var_4 = (unsigned char)96;
int var_6 = 1347182174;
signed char var_8 = (signed char)-35;
int zero = 0;
unsigned char var_10 = (unsigned char)246;
int var_11 = -1698337960;
int var_12 = -1540846878;
unsigned int var_13 = 3887686891U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
