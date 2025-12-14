#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)60278;
unsigned short var_9 = (unsigned short)60768;
int zero = 0;
unsigned int var_14 = 4241468712U;
unsigned short var_15 = (unsigned short)36970;
signed char var_16 = (signed char)-24;
int var_17 = 2037300210;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
