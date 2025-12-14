#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28033;
unsigned short var_2 = (unsigned short)19956;
int var_3 = -2046401408;
unsigned short var_4 = (unsigned short)65125;
unsigned char var_5 = (unsigned char)132;
signed char var_7 = (signed char)109;
unsigned short var_9 = (unsigned short)19752;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)29;
int var_13 = -3087155;
unsigned int var_14 = 1318265479U;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
