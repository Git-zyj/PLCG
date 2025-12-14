#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2037568926;
signed char var_4 = (signed char)71;
signed char var_8 = (signed char)80;
_Bool var_10 = (_Bool)0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_17 = 12286659860202042385ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)42512;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)32;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
