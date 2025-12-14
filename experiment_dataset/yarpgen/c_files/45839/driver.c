#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13442;
short var_1 = (short)28905;
unsigned short var_3 = (unsigned short)34820;
unsigned int var_4 = 3908044981U;
long long int var_9 = 352144996688810455LL;
int zero = 0;
unsigned short var_11 = (unsigned short)42017;
unsigned int var_12 = 1934254096U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
