#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-20839;
unsigned char var_6 = (unsigned char)95;
short var_8 = (short)-6113;
signed char var_13 = (signed char)-91;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 15887663927277621831ULL;
unsigned long long int var_16 = 15629589429524492896ULL;
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
