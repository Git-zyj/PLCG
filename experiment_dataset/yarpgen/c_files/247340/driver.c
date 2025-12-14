#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51199;
unsigned short var_7 = (unsigned short)51119;
unsigned short var_10 = (unsigned short)4832;
unsigned int var_15 = 3823174650U;
int var_16 = 1666395179;
unsigned char var_17 = (unsigned char)13;
int zero = 0;
unsigned short var_20 = (unsigned short)38952;
unsigned int var_21 = 287113126U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
