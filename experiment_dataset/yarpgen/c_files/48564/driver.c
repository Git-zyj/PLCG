#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1900003721;
unsigned char var_10 = (unsigned char)46;
unsigned char var_14 = (unsigned char)7;
short var_18 = (short)4749;
int zero = 0;
unsigned int var_19 = 4096518385U;
unsigned int var_20 = 1966710719U;
short var_21 = (short)-13546;
unsigned char var_22 = (unsigned char)174;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
