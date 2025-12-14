#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)87;
short var_5 = (short)-1795;
signed char var_8 = (signed char)46;
signed char var_10 = (signed char)48;
unsigned int var_12 = 110285503U;
short var_13 = (short)-11138;
unsigned char var_16 = (unsigned char)96;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_19 = 7270487716688659684LL;
unsigned short var_20 = (unsigned short)45839;
unsigned short var_21 = (unsigned short)32554;
signed char var_22 = (signed char)-121;
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
