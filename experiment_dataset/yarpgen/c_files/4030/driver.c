#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)62322;
short var_3 = (short)-2364;
unsigned short var_7 = (unsigned short)43485;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 3686448682U;
short var_16 = (short)-17908;
unsigned short var_17 = (unsigned short)35749;
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
