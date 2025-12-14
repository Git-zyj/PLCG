#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55356;
short var_2 = (short)-11667;
unsigned long long int var_5 = 253536328062443386ULL;
unsigned int var_6 = 1401368120U;
unsigned char var_7 = (unsigned char)140;
int var_8 = 2053931750;
int zero = 0;
unsigned short var_10 = (unsigned short)23142;
short var_11 = (short)-23002;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
