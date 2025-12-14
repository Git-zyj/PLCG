#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 142169438U;
_Bool var_15 = (_Bool)0;
short var_16 = (short)17216;
signed char var_17 = (signed char)101;
int zero = 0;
signed char var_19 = (signed char)-56;
unsigned short var_20 = (unsigned short)21140;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
