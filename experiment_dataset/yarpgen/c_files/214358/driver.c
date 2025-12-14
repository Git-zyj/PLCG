#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -423872770;
unsigned short var_5 = (unsigned short)6894;
_Bool var_11 = (_Bool)0;
unsigned short var_14 = (unsigned short)26033;
short var_16 = (short)16859;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = -1136230180;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)3;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
