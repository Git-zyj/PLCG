#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 948160973U;
short var_3 = (short)2421;
unsigned char var_4 = (unsigned char)156;
short var_5 = (short)-9327;
unsigned int var_6 = 866942576U;
signed char var_8 = (signed char)-8;
unsigned char var_11 = (unsigned char)120;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-2653;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
