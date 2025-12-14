#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2961;
short var_5 = (short)-11295;
short var_8 = (short)9470;
short var_9 = (short)8627;
short var_11 = (short)14652;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_16 = (short)29970;
unsigned short var_17 = (unsigned short)48995;
short var_18 = (short)-11818;
void init() {
}

void checksum() {
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
