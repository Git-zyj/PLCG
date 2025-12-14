#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)202;
int var_5 = -2071729166;
unsigned int var_8 = 500606465U;
unsigned char var_13 = (unsigned char)120;
int zero = 0;
int var_16 = 1931889097;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 4114090033U;
unsigned int var_19 = 1964274505U;
unsigned short var_20 = (unsigned short)41767;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
