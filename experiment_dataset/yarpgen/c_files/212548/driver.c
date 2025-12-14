#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14283;
signed char var_5 = (signed char)-1;
unsigned short var_6 = (unsigned short)33152;
unsigned long long int var_8 = 8411649014680908485ULL;
unsigned short var_17 = (unsigned short)7643;
int zero = 0;
unsigned short var_18 = (unsigned short)44252;
unsigned char var_19 = (unsigned char)247;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
