#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51463;
unsigned short var_2 = (unsigned short)51950;
unsigned short var_3 = (unsigned short)47913;
unsigned short var_4 = (unsigned short)23716;
unsigned short var_6 = (unsigned short)48632;
unsigned short var_8 = (unsigned short)18598;
unsigned short var_11 = (unsigned short)48781;
int zero = 0;
unsigned short var_12 = (unsigned short)52501;
unsigned short var_13 = (unsigned short)44142;
unsigned short var_14 = (unsigned short)20913;
unsigned short var_15 = (unsigned short)8822;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
