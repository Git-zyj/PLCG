#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)27053;
signed char var_5 = (signed char)3;
long long int var_7 = 2455876784050028516LL;
unsigned int var_11 = 1066948353U;
int zero = 0;
long long int var_15 = -4681524946993758814LL;
unsigned short var_16 = (unsigned short)42059;
signed char var_17 = (signed char)4;
void init() {
}

void checksum() {
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
