#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)52;
signed char var_6 = (signed char)-40;
unsigned long long int var_7 = 4280830461989043635ULL;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)7891;
int zero = 0;
unsigned char var_14 = (unsigned char)78;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)3534;
unsigned short var_17 = (unsigned short)3511;
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
