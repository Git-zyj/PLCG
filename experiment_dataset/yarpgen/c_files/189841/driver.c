#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)24329;
unsigned short var_10 = (unsigned short)55335;
unsigned short var_12 = (unsigned short)35863;
int zero = 0;
unsigned short var_17 = (unsigned short)58117;
unsigned short var_18 = (unsigned short)41369;
unsigned int var_19 = 2890320596U;
void init() {
}

void checksum() {
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
