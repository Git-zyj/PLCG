#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)207;
unsigned char var_10 = (unsigned char)140;
signed char var_12 = (signed char)-2;
unsigned short var_13 = (unsigned short)16051;
signed char var_14 = (signed char)57;
int zero = 0;
short var_15 = (short)-9327;
_Bool var_16 = (_Bool)0;
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
