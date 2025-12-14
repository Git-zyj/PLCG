#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2937932189U;
signed char var_2 = (signed char)118;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)108;
unsigned short var_8 = (unsigned short)526;
_Bool var_12 = (_Bool)1;
unsigned char var_14 = (unsigned char)187;
unsigned short var_17 = (unsigned short)23546;
int var_19 = -1232916028;
int zero = 0;
unsigned short var_20 = (unsigned short)2959;
unsigned short var_21 = (unsigned short)11590;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
