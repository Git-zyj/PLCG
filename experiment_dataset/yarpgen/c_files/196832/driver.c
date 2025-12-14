#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)114;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)22575;
_Bool var_16 = (_Bool)1;
unsigned char var_18 = (unsigned char)5;
int var_19 = -1113379429;
int zero = 0;
unsigned char var_20 = (unsigned char)143;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)33;
unsigned char var_23 = (unsigned char)53;
unsigned char var_24 = (unsigned char)122;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
