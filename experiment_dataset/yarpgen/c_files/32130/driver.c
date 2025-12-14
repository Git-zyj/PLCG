#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -403172070;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned char var_9 = (unsigned char)118;
unsigned char var_14 = (unsigned char)241;
short var_15 = (short)-25061;
int var_16 = -24245268;
long long int var_18 = -7578145068233192041LL;
int zero = 0;
unsigned int var_19 = 638077237U;
unsigned char var_20 = (unsigned char)26;
unsigned int var_21 = 2163672962U;
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
