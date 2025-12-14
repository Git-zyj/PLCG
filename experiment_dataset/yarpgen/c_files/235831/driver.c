#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10826111071592689425ULL;
short var_4 = (short)-15791;
unsigned int var_8 = 2508442746U;
int zero = 0;
unsigned short var_18 = (unsigned short)8951;
unsigned int var_19 = 3627504143U;
unsigned char var_20 = (unsigned char)11;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
