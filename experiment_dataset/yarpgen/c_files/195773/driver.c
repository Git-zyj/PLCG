#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2043105591;
int var_1 = -2143185758;
unsigned short var_5 = (unsigned short)4993;
int zero = 0;
unsigned short var_20 = (unsigned short)42321;
unsigned int var_21 = 2870586186U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
