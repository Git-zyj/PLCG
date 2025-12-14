#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
unsigned char var_1 = (unsigned char)101;
unsigned char var_9 = (unsigned char)212;
unsigned int var_11 = 1223250344U;
int zero = 0;
unsigned char var_12 = (unsigned char)239;
unsigned int var_13 = 3542995950U;
unsigned char var_14 = (unsigned char)193;
unsigned char var_15 = (unsigned char)207;
void init() {
}

void checksum() {
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
