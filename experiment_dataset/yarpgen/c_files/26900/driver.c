#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64416;
unsigned int var_2 = 1251664499U;
signed char var_10 = (signed char)-103;
int zero = 0;
short var_14 = (short)22257;
unsigned short var_15 = (unsigned short)15098;
signed char var_16 = (signed char)125;
void init() {
}

void checksum() {
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
