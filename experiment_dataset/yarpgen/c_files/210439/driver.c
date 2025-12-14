#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2793380489U;
unsigned int var_2 = 305001874U;
unsigned char var_6 = (unsigned char)246;
_Bool var_7 = (_Bool)0;
unsigned int var_14 = 2002794967U;
short var_15 = (short)5077;
int zero = 0;
unsigned int var_19 = 1090630950U;
short var_20 = (short)-10256;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
