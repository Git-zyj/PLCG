#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5103428991856156974LL;
signed char var_1 = (signed char)-61;
unsigned char var_3 = (unsigned char)85;
unsigned int var_7 = 4252635053U;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)32382;
long long int var_16 = 2428993837263165785LL;
long long int var_17 = 449123394095079443LL;
unsigned short var_18 = (unsigned short)62747;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
