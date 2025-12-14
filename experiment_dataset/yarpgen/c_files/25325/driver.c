#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1623447060;
signed char var_3 = (signed char)-59;
unsigned int var_4 = 248606945U;
unsigned short var_5 = (unsigned short)42403;
unsigned short var_8 = (unsigned short)9658;
signed char var_9 = (signed char)49;
unsigned int var_12 = 3791893914U;
short var_14 = (short)-21873;
int zero = 0;
unsigned short var_19 = (unsigned short)35364;
long long int var_20 = -5601412845076969417LL;
unsigned short var_21 = (unsigned short)15450;
unsigned int var_22 = 4132292699U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
