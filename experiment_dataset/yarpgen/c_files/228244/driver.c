#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -589512371;
unsigned int var_6 = 828279105U;
short var_7 = (short)-9177;
unsigned int var_8 = 350314063U;
_Bool var_12 = (_Bool)0;
int var_14 = 1528307989;
int zero = 0;
signed char var_19 = (signed char)113;
int var_20 = -1241092670;
short var_21 = (short)-6753;
void init() {
}

void checksum() {
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
