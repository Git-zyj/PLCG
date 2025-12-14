#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6872;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)123;
unsigned char var_3 = (unsigned char)178;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)44114;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)63445;
unsigned long long int var_12 = 16692579157614448686ULL;
signed char var_13 = (signed char)-3;
unsigned long long int var_14 = 3999098978921907089ULL;
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
