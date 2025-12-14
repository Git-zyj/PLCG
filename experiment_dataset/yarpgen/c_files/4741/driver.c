#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)251;
unsigned short var_3 = (unsigned short)58307;
int var_6 = -1399222028;
signed char var_8 = (signed char)124;
short var_15 = (short)11890;
unsigned long long int var_16 = 9914414645194682558ULL;
int zero = 0;
signed char var_20 = (signed char)-46;
unsigned char var_21 = (unsigned char)144;
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
