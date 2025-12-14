#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)145;
signed char var_3 = (signed char)55;
unsigned char var_14 = (unsigned char)73;
int zero = 0;
unsigned char var_17 = (unsigned char)124;
unsigned short var_18 = (unsigned short)48844;
unsigned int var_19 = 1989683756U;
signed char var_20 = (signed char)-42;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
