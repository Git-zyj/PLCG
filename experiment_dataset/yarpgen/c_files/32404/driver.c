#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2615535544U;
unsigned char var_2 = (unsigned char)213;
unsigned char var_3 = (unsigned char)246;
signed char var_4 = (signed char)8;
unsigned short var_8 = (unsigned short)5843;
int zero = 0;
short var_10 = (short)10973;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)104;
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
