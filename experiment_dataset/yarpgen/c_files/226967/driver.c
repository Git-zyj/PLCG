#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_3 = -1209786492;
unsigned char var_4 = (unsigned char)185;
unsigned char var_5 = (unsigned char)86;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)90;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)51795;
unsigned char var_12 = (unsigned char)246;
unsigned int var_16 = 1563016594U;
_Bool var_17 = (_Bool)0;
unsigned char var_19 = (unsigned char)77;
int zero = 0;
unsigned char var_20 = (unsigned char)151;
unsigned int var_21 = 2198782058U;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)0;
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
