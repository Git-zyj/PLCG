#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2033301142U;
_Bool var_3 = (_Bool)1;
unsigned char var_8 = (unsigned char)11;
long long int var_9 = -733490220415574498LL;
unsigned short var_11 = (unsigned short)16478;
unsigned char var_12 = (unsigned char)229;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)109;
unsigned short var_18 = (unsigned short)60919;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
