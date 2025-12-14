#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2911488449U;
_Bool var_3 = (_Bool)0;
short var_8 = (short)-31686;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)12970;
int zero = 0;
unsigned char var_14 = (unsigned char)187;
unsigned short var_15 = (unsigned short)58949;
signed char var_16 = (signed char)36;
void init() {
}

void checksum() {
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
