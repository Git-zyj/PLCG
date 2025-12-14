#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)215;
unsigned short var_4 = (unsigned short)28363;
signed char var_6 = (signed char)-70;
unsigned int var_8 = 3787772873U;
unsigned char var_10 = (unsigned char)178;
int zero = 0;
unsigned char var_17 = (unsigned char)20;
int var_18 = 2015556640;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
