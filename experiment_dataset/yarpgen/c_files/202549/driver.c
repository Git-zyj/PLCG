#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)44614;
_Bool var_7 = (_Bool)1;
unsigned char var_11 = (unsigned char)135;
unsigned char var_14 = (unsigned char)127;
unsigned char var_16 = (unsigned char)137;
unsigned char var_17 = (unsigned char)156;
unsigned short var_19 = (unsigned short)3413;
int zero = 0;
unsigned short var_20 = (unsigned short)655;
unsigned char var_21 = (unsigned char)109;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
