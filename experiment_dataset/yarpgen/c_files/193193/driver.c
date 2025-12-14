#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)10;
signed char var_10 = (signed char)41;
signed char var_13 = (signed char)18;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 78561079U;
int zero = 0;
unsigned char var_20 = (unsigned char)140;
short var_21 = (short)-16649;
signed char var_22 = (signed char)-70;
signed char var_23 = (signed char)31;
short var_24 = (short)-21410;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
