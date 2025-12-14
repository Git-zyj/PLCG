#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1569940230;
unsigned short var_2 = (unsigned short)64691;
unsigned int var_5 = 3245300650U;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)4140;
int zero = 0;
unsigned char var_11 = (unsigned char)30;
unsigned char var_12 = (unsigned char)247;
void init() {
}

void checksum() {
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
