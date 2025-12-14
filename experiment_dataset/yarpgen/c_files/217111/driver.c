#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)43801;
unsigned short var_6 = (unsigned short)2621;
unsigned short var_8 = (unsigned short)52777;
unsigned short var_12 = (unsigned short)19983;
int zero = 0;
unsigned short var_14 = (unsigned short)32046;
unsigned short var_15 = (unsigned short)47827;
unsigned short var_16 = (unsigned short)2593;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
