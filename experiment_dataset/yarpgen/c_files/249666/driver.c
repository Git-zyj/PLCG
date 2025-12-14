#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-2;
_Bool var_7 = (_Bool)0;
unsigned char var_13 = (unsigned char)139;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 27936550U;
unsigned char var_17 = (unsigned char)236;
int zero = 0;
unsigned char var_20 = (unsigned char)170;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)8;
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
