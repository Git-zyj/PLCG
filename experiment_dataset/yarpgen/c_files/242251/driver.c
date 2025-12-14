#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21152;
signed char var_3 = (signed char)62;
signed char var_5 = (signed char)23;
int var_7 = 1352240674;
unsigned char var_8 = (unsigned char)184;
unsigned char var_11 = (unsigned char)83;
unsigned char var_13 = (unsigned char)246;
int zero = 0;
short var_20 = (short)26806;
unsigned char var_21 = (unsigned char)201;
signed char var_22 = (signed char)110;
short var_23 = (short)-18019;
int var_24 = -943226705;
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
