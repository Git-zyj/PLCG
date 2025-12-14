#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13259242632258355959ULL;
unsigned short var_2 = (unsigned short)32162;
short var_3 = (short)-31846;
unsigned short var_7 = (unsigned short)4841;
short var_10 = (short)5904;
signed char var_11 = (signed char)42;
unsigned short var_12 = (unsigned short)58147;
int zero = 0;
int var_14 = 1219431467;
short var_15 = (short)-19936;
unsigned char var_16 = (unsigned char)114;
unsigned char var_17 = (unsigned char)38;
unsigned long long int var_18 = 8678095525554637204ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
