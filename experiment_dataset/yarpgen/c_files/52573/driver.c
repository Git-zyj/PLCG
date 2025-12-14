#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_4 = 1939334446U;
unsigned char var_8 = (unsigned char)10;
signed char var_9 = (signed char)-57;
int var_10 = 1163441206;
int var_11 = -1628731207;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -195753164;
unsigned long long int var_15 = 16276422183221109210ULL;
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
