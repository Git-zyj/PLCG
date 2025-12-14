#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7656279993196539063LL;
unsigned short var_1 = (unsigned short)29710;
unsigned short var_2 = (unsigned short)19628;
int var_3 = -2126886896;
long long int var_6 = 7692295993292481727LL;
short var_8 = (short)-6905;
int zero = 0;
unsigned int var_12 = 3313573510U;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 6848515408789572680ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
