#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1624287338931154412LL;
unsigned short var_3 = (unsigned short)33654;
short var_4 = (short)2653;
unsigned int var_13 = 2863157702U;
signed char var_16 = (signed char)-78;
int zero = 0;
unsigned char var_20 = (unsigned char)216;
short var_21 = (short)9012;
unsigned int var_22 = 2927758862U;
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
