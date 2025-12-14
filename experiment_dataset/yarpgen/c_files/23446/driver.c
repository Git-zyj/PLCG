#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1362;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-47;
unsigned int var_4 = 2217137758U;
_Bool var_5 = (_Bool)0;
short var_6 = (short)12116;
signed char var_7 = (signed char)-122;
long long int var_9 = 9083345201303780240LL;
int zero = 0;
unsigned short var_10 = (unsigned short)13203;
unsigned char var_11 = (unsigned char)84;
unsigned short var_12 = (unsigned short)48221;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
