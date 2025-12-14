#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4291;
_Bool var_3 = (_Bool)0;
signed char var_11 = (signed char)-100;
int zero = 0;
int var_12 = -1365929620;
unsigned char var_13 = (unsigned char)10;
unsigned char var_14 = (unsigned char)225;
short var_15 = (short)-24208;
long long int var_16 = -8255015430274001002LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
