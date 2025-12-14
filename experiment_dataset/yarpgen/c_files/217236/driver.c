#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)3463;
unsigned short var_5 = (unsigned short)59030;
signed char var_9 = (signed char)-100;
short var_12 = (short)-20100;
int zero = 0;
short var_13 = (short)2583;
int var_14 = 615670088;
void init() {
}

void checksum() {
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
