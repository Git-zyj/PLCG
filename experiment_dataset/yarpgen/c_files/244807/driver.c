#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_6 = 2544174744U;
unsigned short var_7 = (unsigned short)14535;
int var_9 = 290938514;
short var_11 = (short)14825;
unsigned short var_16 = (unsigned short)33457;
short var_17 = (short)-5919;
signed char var_18 = (signed char)83;
int zero = 0;
long long int var_20 = 2111319781865597461LL;
signed char var_21 = (signed char)-81;
void init() {
}

void checksum() {
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
