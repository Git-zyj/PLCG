#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)11749;
unsigned short var_8 = (unsigned short)43023;
unsigned int var_10 = 1602595981U;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_20 = -1839487309;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 115895978U;
long long int var_23 = 8015315541275785411LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
