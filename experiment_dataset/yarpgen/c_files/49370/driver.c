#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 14236121282788486639ULL;
int var_7 = -194731909;
int zero = 0;
short var_11 = (short)-32027;
unsigned char var_12 = (unsigned char)225;
unsigned short var_13 = (unsigned short)61433;
long long int var_14 = -7287469417152700417LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
