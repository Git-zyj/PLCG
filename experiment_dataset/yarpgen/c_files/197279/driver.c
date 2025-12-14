#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)227;
_Bool var_2 = (_Bool)1;
unsigned short var_6 = (unsigned short)4590;
int var_9 = -1959120733;
unsigned short var_11 = (unsigned short)29682;
int var_12 = -336239665;
unsigned int var_13 = 4093846811U;
unsigned short var_15 = (unsigned short)31845;
int zero = 0;
long long int var_16 = -4184382890061578067LL;
unsigned short var_17 = (unsigned short)51543;
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
