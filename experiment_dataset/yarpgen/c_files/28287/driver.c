#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48734;
unsigned short var_1 = (unsigned short)19368;
unsigned short var_3 = (unsigned short)10460;
unsigned short var_8 = (unsigned short)51647;
unsigned short var_12 = (unsigned short)36541;
int zero = 0;
unsigned short var_13 = (unsigned short)21032;
unsigned short var_14 = (unsigned short)59807;
unsigned short var_15 = (unsigned short)16703;
void init() {
}

void checksum() {
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
