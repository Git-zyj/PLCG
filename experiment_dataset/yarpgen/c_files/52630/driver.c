#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7708353949712597665ULL;
signed char var_8 = (signed char)33;
short var_9 = (short)-6170;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 2668956476U;
unsigned char var_14 = (unsigned char)137;
unsigned char var_15 = (unsigned char)115;
unsigned char var_16 = (unsigned char)60;
unsigned char var_17 = (unsigned char)33;
unsigned short var_18 = (unsigned short)31287;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
