#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-29585;
unsigned short var_11 = (unsigned short)27805;
unsigned short var_12 = (unsigned short)22371;
int zero = 0;
unsigned int var_15 = 1370632166U;
unsigned short var_16 = (unsigned short)36704;
void init() {
}

void checksum() {
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
