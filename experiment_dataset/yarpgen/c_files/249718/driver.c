#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_7 = (unsigned char)32;
int var_8 = 1244071004;
short var_9 = (short)31409;
_Bool var_12 = (_Bool)1;
long long int var_13 = 226004748992871659LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_15 = 1647215164;
signed char var_16 = (signed char)-99;
unsigned char var_17 = (unsigned char)97;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
