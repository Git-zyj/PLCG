#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)48;
unsigned long long int var_5 = 1932452503652013453ULL;
signed char var_6 = (signed char)-101;
_Bool var_8 = (_Bool)1;
short var_11 = (short)30779;
int zero = 0;
signed char var_12 = (signed char)91;
unsigned long long int var_13 = 17774061592499982923ULL;
short var_14 = (short)30115;
unsigned char var_15 = (unsigned char)105;
unsigned int var_16 = 3502238882U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
