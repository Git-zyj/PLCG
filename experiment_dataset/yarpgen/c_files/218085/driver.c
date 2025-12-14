#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1885759001U;
signed char var_5 = (signed char)12;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)72;
signed char var_9 = (signed char)58;
unsigned char var_10 = (unsigned char)73;
int zero = 0;
short var_13 = (short)-32525;
unsigned char var_14 = (unsigned char)18;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
