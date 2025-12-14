#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 2979842786U;
unsigned char var_7 = (unsigned char)141;
signed char var_11 = (signed char)-85;
int zero = 0;
int var_12 = -489705263;
unsigned char var_13 = (unsigned char)229;
unsigned char var_14 = (unsigned char)3;
void init() {
}

void checksum() {
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
