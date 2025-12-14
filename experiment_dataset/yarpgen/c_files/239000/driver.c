#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8436;
unsigned long long int var_7 = 6669267504529985898ULL;
unsigned char var_14 = (unsigned char)198;
short var_15 = (short)15929;
int zero = 0;
signed char var_20 = (signed char)20;
unsigned char var_21 = (unsigned char)100;
unsigned char var_22 = (unsigned char)122;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
