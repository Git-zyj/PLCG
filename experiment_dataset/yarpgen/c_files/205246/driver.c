#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 977907210U;
unsigned short var_6 = (unsigned short)40310;
unsigned int var_10 = 2772694968U;
signed char var_17 = (signed char)-31;
int zero = 0;
unsigned int var_19 = 1587784426U;
unsigned int var_20 = 1720600160U;
int var_21 = -1153180302;
signed char var_22 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
