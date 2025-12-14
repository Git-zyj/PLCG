#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3982143871U;
unsigned short var_4 = (unsigned short)54028;
unsigned short var_8 = (unsigned short)18570;
int zero = 0;
unsigned short var_10 = (unsigned short)49664;
int var_11 = 603612557;
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
