#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)7481;
unsigned long long int var_4 = 9601626348242658916ULL;
unsigned int var_6 = 3582157096U;
int zero = 0;
unsigned short var_13 = (unsigned short)11102;
int var_14 = 586324619;
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
