#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 536703966U;
signed char var_4 = (signed char)69;
unsigned char var_5 = (unsigned char)192;
short var_6 = (short)19817;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)41294;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)111;
long long int var_12 = -2817885820069276792LL;
short var_15 = (short)7276;
long long int var_16 = -34896362865805527LL;
int zero = 0;
unsigned short var_17 = (unsigned short)49913;
int var_18 = -1405431262;
_Bool var_19 = (_Bool)1;
long long int var_20 = 4082277912014554104LL;
unsigned short var_21 = (unsigned short)59913;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
