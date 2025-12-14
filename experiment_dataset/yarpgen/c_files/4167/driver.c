#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32574;
_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)53048;
unsigned short var_5 = (unsigned short)62227;
_Bool var_6 = (_Bool)0;
unsigned short var_11 = (unsigned short)40909;
int var_12 = -535338745;
int zero = 0;
unsigned char var_13 = (unsigned char)76;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)71;
unsigned char var_16 = (unsigned char)77;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
