#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1351375043;
unsigned short var_1 = (unsigned short)41525;
unsigned short var_4 = (unsigned short)28543;
int var_5 = 333827952;
unsigned long long int var_7 = 7451194198817945269ULL;
int zero = 0;
unsigned int var_10 = 708023055U;
unsigned short var_11 = (unsigned short)43680;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
