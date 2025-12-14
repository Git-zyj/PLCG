#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_14 = (signed char)-9;
int zero = 0;
unsigned short var_20 = (unsigned short)47521;
unsigned int var_21 = 1048739342U;
short var_22 = (short)-5132;
long long int var_23 = 1024442304662438377LL;
unsigned char var_24 = (unsigned char)227;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
