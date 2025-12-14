#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-126;
unsigned short var_2 = (unsigned short)39110;
unsigned int var_4 = 1376096665U;
int var_7 = 1483096407;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)19953;
unsigned long long int var_12 = 15250972156048104971ULL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)237;
unsigned long long int var_15 = 8383868578166789398ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
