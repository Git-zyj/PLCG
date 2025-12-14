#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_6 = (unsigned short)63117;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)22884;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)194;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)51277;
short var_19 = (short)-20503;
unsigned int var_20 = 2927523777U;
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
