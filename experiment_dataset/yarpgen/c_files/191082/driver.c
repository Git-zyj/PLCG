#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12078807399983178210ULL;
unsigned char var_1 = (unsigned char)87;
unsigned int var_2 = 2545853125U;
unsigned long long int var_3 = 1453267000510308182ULL;
unsigned long long int var_8 = 365596981662318618ULL;
unsigned int var_9 = 1897805880U;
unsigned int var_12 = 3797948044U;
short var_16 = (short)-8089;
int zero = 0;
signed char var_19 = (signed char)4;
int var_20 = 88400583;
unsigned int var_21 = 896755630U;
unsigned char var_22 = (unsigned char)193;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
