#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 1350887922U;
unsigned int var_14 = 3395689644U;
int zero = 0;
unsigned int var_15 = 969699031U;
int var_16 = 1662356050;
short var_17 = (short)22709;
int var_18 = -1253265803;
unsigned short var_19 = (unsigned short)33399;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
