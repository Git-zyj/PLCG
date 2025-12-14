#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8833;
unsigned int var_1 = 2387784153U;
short var_3 = (short)-7055;
short var_9 = (short)5057;
int zero = 0;
signed char var_15 = (signed char)-34;
short var_16 = (short)-20902;
void init() {
}

void checksum() {
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
