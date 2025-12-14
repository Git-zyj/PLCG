#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2097488601;
unsigned int var_1 = 1855170351U;
unsigned int var_4 = 3230856985U;
unsigned short var_6 = (unsigned short)54100;
int zero = 0;
unsigned int var_14 = 245328323U;
unsigned int var_15 = 4139426591U;
void init() {
}

void checksum() {
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
