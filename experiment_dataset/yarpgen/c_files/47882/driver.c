#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 436948635U;
unsigned short var_6 = (unsigned short)29492;
unsigned short var_8 = (unsigned short)24948;
signed char var_9 = (signed char)116;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2703991466U;
unsigned char var_12 = (unsigned char)241;
unsigned char var_13 = (unsigned char)218;
unsigned int var_17 = 1030361271U;
int zero = 0;
unsigned short var_18 = (unsigned short)14386;
long long int var_19 = 1015749523669939638LL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
