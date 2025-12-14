#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)29662;
unsigned short var_5 = (unsigned short)22312;
unsigned short var_6 = (unsigned short)2892;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)51358;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)13935;
short var_11 = (short)32273;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
