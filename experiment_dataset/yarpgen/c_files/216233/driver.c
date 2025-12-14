#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)40205;
unsigned short var_8 = (unsigned short)14330;
unsigned short var_16 = (unsigned short)44362;
unsigned short var_17 = (unsigned short)11614;
int zero = 0;
unsigned short var_18 = (unsigned short)51359;
unsigned short var_19 = (unsigned short)13874;
void init() {
}

void checksum() {
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
