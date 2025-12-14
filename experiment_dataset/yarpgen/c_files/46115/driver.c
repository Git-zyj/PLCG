#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)216;
unsigned char var_4 = (unsigned char)218;
long long int var_5 = 1573434844533642120LL;
unsigned char var_6 = (unsigned char)135;
unsigned short var_7 = (unsigned short)52771;
unsigned short var_8 = (unsigned short)41587;
signed char var_10 = (signed char)69;
short var_12 = (short)17577;
short var_13 = (short)12558;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -3579070142689429545LL;
short var_16 = (short)-266;
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
