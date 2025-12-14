#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)337;
unsigned short var_8 = (unsigned short)2440;
unsigned short var_11 = (unsigned short)24016;
int zero = 0;
unsigned int var_13 = 281829217U;
unsigned int var_14 = 2318831521U;
signed char var_15 = (signed char)-24;
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
