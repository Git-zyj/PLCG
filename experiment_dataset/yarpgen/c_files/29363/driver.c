#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22088;
unsigned int var_2 = 3334020300U;
signed char var_3 = (signed char)122;
unsigned short var_4 = (unsigned short)12961;
unsigned short var_9 = (unsigned short)17174;
unsigned int var_11 = 1821643532U;
int zero = 0;
signed char var_12 = (signed char)-125;
int var_13 = 1275999255;
signed char var_14 = (signed char)-23;
long long int var_15 = -8673149150642639822LL;
int var_16 = 2059851663;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
