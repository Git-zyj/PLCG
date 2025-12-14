#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)155;
unsigned char var_1 = (unsigned char)141;
unsigned char var_2 = (unsigned char)255;
unsigned char var_6 = (unsigned char)68;
unsigned char var_8 = (unsigned char)38;
long long int var_10 = -5751861506350626482LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_16 = -2170627818256087794LL;
unsigned char var_17 = (unsigned char)233;
void init() {
}

void checksum() {
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
