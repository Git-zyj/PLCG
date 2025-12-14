#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62128;
unsigned int var_2 = 2391448248U;
int var_6 = -1750747227;
int zero = 0;
unsigned char var_11 = (unsigned char)62;
unsigned short var_12 = (unsigned short)22633;
unsigned int var_13 = 1725974136U;
short var_14 = (short)18216;
unsigned char var_15 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
