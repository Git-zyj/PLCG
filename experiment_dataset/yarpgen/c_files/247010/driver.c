#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)0;
int var_1 = -79732814;
short var_3 = (short)13616;
signed char var_5 = (signed char)1;
unsigned short var_7 = (unsigned short)6335;
unsigned char var_8 = (unsigned char)180;
unsigned char var_9 = (unsigned char)33;
long long int var_13 = 8599376417254266048LL;
short var_14 = (short)-27263;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)50855;
void init() {
}

void checksum() {
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
