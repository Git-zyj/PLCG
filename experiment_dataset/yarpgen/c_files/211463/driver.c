#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1150054970U;
unsigned long long int var_2 = 2819436757334613891ULL;
unsigned short var_3 = (unsigned short)14907;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 16184126467036345075ULL;
short var_11 = (short)-24453;
signed char var_13 = (signed char)-17;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2882516479U;
int zero = 0;
unsigned short var_18 = (unsigned short)38400;
unsigned short var_19 = (unsigned short)5722;
unsigned long long int var_20 = 95280308189192692ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
