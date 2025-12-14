#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6525749326038204024LL;
unsigned char var_5 = (unsigned char)146;
signed char var_11 = (signed char)-48;
short var_12 = (short)-16408;
int zero = 0;
unsigned int var_13 = 2427033821U;
short var_14 = (short)-16264;
signed char var_15 = (signed char)-10;
short var_16 = (short)-18885;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
