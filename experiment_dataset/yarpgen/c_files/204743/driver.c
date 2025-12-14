#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61171;
signed char var_2 = (signed char)(-127 - 1);
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)-95;
int zero = 0;
short var_10 = (short)24389;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)190;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
