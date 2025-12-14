#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)42059;
unsigned char var_5 = (unsigned char)235;
signed char var_10 = (signed char)103;
int zero = 0;
signed char var_11 = (signed char)-46;
short var_12 = (short)-13723;
signed char var_13 = (signed char)-52;
unsigned short var_14 = (unsigned short)57885;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
