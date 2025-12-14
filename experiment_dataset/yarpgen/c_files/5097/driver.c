#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2988137163U;
unsigned char var_11 = (unsigned char)195;
unsigned short var_12 = (unsigned short)28952;
int zero = 0;
unsigned short var_13 = (unsigned short)35023;
unsigned short var_14 = (unsigned short)8221;
int var_15 = -130594620;
void init() {
}

void checksum() {
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
