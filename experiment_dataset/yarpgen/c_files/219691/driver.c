#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-54;
unsigned int var_6 = 2022119352U;
_Bool var_7 = (_Bool)0;
long long int var_12 = -2784285600419888007LL;
unsigned char var_15 = (unsigned char)125;
int zero = 0;
short var_20 = (short)-10541;
unsigned short var_21 = (unsigned short)24136;
long long int var_22 = -5923229860173845079LL;
_Bool var_23 = (_Bool)1;
int var_24 = 1058246393;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
