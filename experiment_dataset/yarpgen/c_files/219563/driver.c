#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52730;
unsigned short var_1 = (unsigned short)52687;
unsigned short var_3 = (unsigned short)9535;
unsigned short var_5 = (unsigned short)59443;
int zero = 0;
unsigned short var_10 = (unsigned short)22571;
unsigned short var_11 = (unsigned short)44028;
unsigned short var_12 = (unsigned short)28435;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
