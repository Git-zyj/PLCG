#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)12928;
unsigned char var_5 = (unsigned char)10;
int var_8 = 1266827107;
long long int var_9 = -8740495077415949199LL;
unsigned char var_12 = (unsigned char)122;
int var_13 = 1872449072;
unsigned short var_15 = (unsigned short)17894;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)98;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)27690;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
