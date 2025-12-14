#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)29080;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-93;
unsigned short var_8 = (unsigned short)45285;
unsigned char var_11 = (unsigned char)176;
int var_12 = 2052000104;
int zero = 0;
unsigned char var_13 = (unsigned char)248;
unsigned short var_14 = (unsigned short)50403;
void init() {
}

void checksum() {
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
