#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
unsigned short var_16 = (unsigned short)10316;
unsigned int var_19 = 1333802581U;
int zero = 0;
unsigned short var_20 = (unsigned short)48966;
signed char var_21 = (signed char)49;
unsigned short var_22 = (unsigned short)29601;
void init() {
}

void checksum() {
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
