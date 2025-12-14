#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-19728;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)3;
unsigned int var_6 = 446433940U;
_Bool var_12 = (_Bool)1;
unsigned long long int var_15 = 1869517800370232372ULL;
short var_16 = (short)-13524;
short var_18 = (short)-6874;
int var_19 = -1650015984;
int zero = 0;
unsigned char var_20 = (unsigned char)128;
unsigned short var_21 = (unsigned short)53190;
unsigned int var_22 = 4026715945U;
unsigned char var_23 = (unsigned char)93;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
