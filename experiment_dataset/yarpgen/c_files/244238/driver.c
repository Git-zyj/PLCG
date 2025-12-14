#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)408;
unsigned short var_4 = (unsigned short)35668;
unsigned short var_5 = (unsigned short)24188;
unsigned short var_8 = (unsigned short)60357;
unsigned short var_9 = (unsigned short)42911;
int zero = 0;
unsigned short var_10 = (unsigned short)28072;
unsigned short var_11 = (unsigned short)43616;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
