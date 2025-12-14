#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5872;
short var_3 = (short)-25797;
long long int var_4 = 6567287669553465905LL;
unsigned short var_5 = (unsigned short)52330;
signed char var_7 = (signed char)-124;
unsigned int var_13 = 239293652U;
int zero = 0;
unsigned int var_14 = 2414457902U;
signed char var_15 = (signed char)-31;
unsigned char var_16 = (unsigned char)236;
unsigned int var_17 = 401099386U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
