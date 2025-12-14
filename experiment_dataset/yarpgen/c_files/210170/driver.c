#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)20021;
unsigned short var_6 = (unsigned short)21742;
signed char var_8 = (signed char)85;
signed char var_10 = (signed char)103;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-99;
int zero = 0;
signed char var_15 = (signed char)64;
signed char var_16 = (signed char)102;
void init() {
}

void checksum() {
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
