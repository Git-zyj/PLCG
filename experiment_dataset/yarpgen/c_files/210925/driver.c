#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)56;
signed char var_4 = (signed char)-69;
signed char var_6 = (signed char)64;
short var_8 = (short)-28949;
unsigned short var_9 = (unsigned short)43518;
signed char var_10 = (signed char)32;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-70;
unsigned int var_14 = 399780334U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
