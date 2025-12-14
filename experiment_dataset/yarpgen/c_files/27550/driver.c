#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46587;
int var_1 = 50842160;
int var_2 = 2043814484;
unsigned short var_3 = (unsigned short)31668;
short var_4 = (short)7276;
int var_5 = -60816601;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3783614795U;
int var_8 = 1924952101;
int var_9 = 2135360390;
unsigned int var_11 = 2960553563U;
unsigned long long int var_12 = 2069453140691224846ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)86;
int var_14 = 1462597050;
_Bool var_15 = (_Bool)0;
int var_16 = 476805553;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
