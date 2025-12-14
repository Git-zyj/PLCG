#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_8 = (unsigned char)191;
unsigned char var_10 = (unsigned char)22;
int var_13 = 1019708342;
int zero = 0;
unsigned char var_18 = (unsigned char)210;
unsigned short var_19 = (unsigned short)2948;
int var_20 = 944277382;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
