#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)196;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)29;
int var_8 = 1324242416;
int var_9 = 474001224;
unsigned char var_11 = (unsigned char)15;
unsigned short var_12 = (unsigned short)29855;
unsigned int var_13 = 1725173104U;
int zero = 0;
unsigned int var_14 = 3588798529U;
unsigned int var_15 = 2861003359U;
unsigned char var_16 = (unsigned char)52;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
