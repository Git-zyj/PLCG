#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 651416787;
unsigned int var_8 = 2001676903U;
int zero = 0;
signed char var_11 = (signed char)-20;
_Bool var_12 = (_Bool)0;
short var_13 = (short)17128;
unsigned int var_14 = 1603518883U;
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
