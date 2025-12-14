#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22317;
unsigned short var_2 = (unsigned short)17266;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)253;
signed char var_6 = (signed char)43;
unsigned short var_7 = (unsigned short)11674;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)60104;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
