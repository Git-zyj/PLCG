#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-675;
unsigned char var_10 = (unsigned char)123;
short var_16 = (short)26113;
int zero = 0;
unsigned short var_19 = (unsigned short)48575;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)33239;
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
