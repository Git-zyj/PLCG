#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10228;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned short var_8 = (unsigned short)3330;
short var_11 = (short)-10274;
short var_13 = (short)22169;
int zero = 0;
unsigned short var_17 = (unsigned short)55636;
short var_18 = (short)11309;
void init() {
}

void checksum() {
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
