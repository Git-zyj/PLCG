#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2718345909U;
short var_2 = (short)23602;
signed char var_3 = (signed char)29;
signed char var_6 = (signed char)125;
signed char var_7 = (signed char)4;
short var_8 = (short)-1670;
unsigned short var_15 = (unsigned short)21415;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)83;
short var_19 = (short)14565;
unsigned int var_20 = 2201648863U;
long long int var_21 = -2244493780223772455LL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
