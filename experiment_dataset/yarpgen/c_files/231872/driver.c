#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3915767227U;
unsigned short var_4 = (unsigned short)55957;
unsigned short var_8 = (unsigned short)43753;
int zero = 0;
unsigned short var_13 = (unsigned short)61301;
unsigned long long int var_14 = 695194942222676799ULL;
short var_15 = (short)-14774;
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
