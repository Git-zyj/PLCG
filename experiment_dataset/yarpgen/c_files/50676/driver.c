#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_6 = (unsigned char)248;
unsigned char var_7 = (unsigned char)138;
unsigned short var_9 = (unsigned short)14195;
short var_14 = (short)-12555;
int zero = 0;
unsigned short var_16 = (unsigned short)35774;
unsigned short var_17 = (unsigned short)55730;
unsigned int var_18 = 419224479U;
unsigned short var_19 = (unsigned short)11036;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
