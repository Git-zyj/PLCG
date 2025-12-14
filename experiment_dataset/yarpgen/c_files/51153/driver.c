#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1903070105U;
unsigned char var_6 = (unsigned char)234;
unsigned char var_9 = (unsigned char)57;
unsigned short var_10 = (unsigned short)58550;
int zero = 0;
unsigned char var_13 = (unsigned char)5;
unsigned int var_14 = 3496880471U;
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
