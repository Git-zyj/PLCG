#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25933;
short var_2 = (short)29554;
unsigned char var_7 = (unsigned char)82;
short var_17 = (short)12847;
unsigned char var_19 = (unsigned char)32;
int zero = 0;
short var_20 = (short)4986;
unsigned char var_21 = (unsigned char)227;
unsigned char var_22 = (unsigned char)171;
short var_23 = (short)-14749;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
