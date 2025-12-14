#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_13 = 1097297207951751239LL;
int var_15 = -1950727029;
_Bool var_16 = (_Bool)1;
long long int var_17 = -8243289003495595201LL;
unsigned int var_18 = 2518743704U;
int zero = 0;
short var_19 = (short)-26169;
unsigned char var_20 = (unsigned char)11;
unsigned short var_21 = (unsigned short)60232;
signed char var_22 = (signed char)16;
unsigned char var_23 = (unsigned char)46;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
