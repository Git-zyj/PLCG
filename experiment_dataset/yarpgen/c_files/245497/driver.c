#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5029631783150790571LL;
long long int var_2 = -6778914072781263223LL;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)132;
unsigned int var_5 = 1779435627U;
unsigned int var_8 = 502658305U;
int var_9 = 1818963341;
int zero = 0;
int var_10 = 1443403998;
short var_11 = (short)-31978;
unsigned int var_12 = 1603081747U;
unsigned short var_13 = (unsigned short)65213;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
