#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12050;
int var_7 = -1786493819;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 9829564932089040129ULL;
unsigned short var_11 = (unsigned short)30582;
unsigned short var_12 = (unsigned short)25905;
int zero = 0;
unsigned short var_16 = (unsigned short)5441;
unsigned short var_17 = (unsigned short)35852;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
