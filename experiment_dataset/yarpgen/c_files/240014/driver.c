#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)49314;
int var_6 = -1698970651;
unsigned char var_8 = (unsigned char)6;
int var_9 = 1218918942;
int zero = 0;
int var_11 = 857937755;
unsigned short var_12 = (unsigned short)11024;
void init() {
}

void checksum() {
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
