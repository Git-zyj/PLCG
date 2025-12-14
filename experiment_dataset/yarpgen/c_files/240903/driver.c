#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)255;
signed char var_6 = (signed char)32;
unsigned char var_12 = (unsigned char)4;
unsigned short var_14 = (unsigned short)42047;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)18687;
int var_19 = -288719650;
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
