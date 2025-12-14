#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24148;
unsigned short var_1 = (unsigned short)2375;
int var_5 = 737716537;
short var_6 = (short)764;
unsigned short var_10 = (unsigned short)33479;
short var_12 = (short)14817;
int zero = 0;
unsigned short var_13 = (unsigned short)42485;
short var_14 = (short)22550;
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
