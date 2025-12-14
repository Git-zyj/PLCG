#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)28323;
unsigned short var_4 = (unsigned short)12067;
short var_9 = (short)12289;
short var_10 = (short)4801;
unsigned char var_11 = (unsigned char)218;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)57706;
unsigned short var_15 = (unsigned short)14689;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)48441;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
