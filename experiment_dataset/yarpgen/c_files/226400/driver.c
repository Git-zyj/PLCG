#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15546;
int var_3 = -967300818;
_Bool var_6 = (_Bool)1;
int var_8 = 32155546;
unsigned char var_10 = (unsigned char)55;
unsigned char var_11 = (unsigned char)97;
int var_12 = 1341029692;
int zero = 0;
unsigned char var_13 = (unsigned char)98;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
