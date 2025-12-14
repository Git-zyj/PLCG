#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)6289;
short var_10 = (short)-25843;
unsigned long long int var_12 = 17988274696509421578ULL;
int zero = 0;
unsigned int var_14 = 3410802539U;
unsigned short var_15 = (unsigned short)11350;
short var_16 = (short)-8352;
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
