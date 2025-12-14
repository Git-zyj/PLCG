#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20365;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-18558;
unsigned short var_6 = (unsigned short)13280;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)54890;
int zero = 0;
unsigned short var_10 = (unsigned short)15203;
unsigned int var_11 = 2634997425U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
