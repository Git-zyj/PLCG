#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-16;
unsigned long long int var_5 = 1923207803907801430ULL;
short var_8 = (short)30068;
signed char var_11 = (signed char)52;
unsigned int var_14 = 2736825153U;
int zero = 0;
signed char var_17 = (signed char)-90;
unsigned int var_18 = 4228747027U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
