#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)61264;
long long int var_12 = 1545482935374279829LL;
int zero = 0;
unsigned short var_16 = (unsigned short)24342;
signed char var_17 = (signed char)-7;
signed char var_18 = (signed char)105;
unsigned char var_19 = (unsigned char)115;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
