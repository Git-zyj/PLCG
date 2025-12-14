#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13478;
signed char var_4 = (signed char)-92;
int var_8 = 259659601;
int zero = 0;
unsigned short var_20 = (unsigned short)63798;
signed char var_21 = (signed char)-107;
unsigned char var_22 = (unsigned char)99;
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
