#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4946525913338364377LL;
unsigned short var_2 = (unsigned short)6247;
unsigned short var_11 = (unsigned short)43508;
int zero = 0;
unsigned int var_15 = 1042797445U;
unsigned short var_16 = (unsigned short)60847;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
