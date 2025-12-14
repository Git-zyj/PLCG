#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 6684000093026690811LL;
signed char var_12 = (signed char)-53;
unsigned int var_14 = 3443132981U;
unsigned char var_15 = (unsigned char)10;
int zero = 0;
unsigned short var_20 = (unsigned short)7096;
unsigned char var_21 = (unsigned char)178;
unsigned char var_22 = (unsigned char)115;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
