#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)-26846;
unsigned short var_3 = (unsigned short)29543;
signed char var_4 = (signed char)42;
unsigned short var_5 = (unsigned short)61903;
unsigned int var_6 = 2669069990U;
signed char var_7 = (signed char)59;
int var_8 = -1773112289;
int zero = 0;
short var_10 = (short)-8031;
unsigned char var_11 = (unsigned char)77;
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
