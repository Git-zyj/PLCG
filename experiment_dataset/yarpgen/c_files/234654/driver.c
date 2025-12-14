#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)100;
unsigned short var_10 = (unsigned short)16920;
int var_12 = 426676137;
int var_14 = -482759920;
int var_16 = -555716524;
unsigned char var_17 = (unsigned char)12;
int zero = 0;
int var_18 = -1071712681;
int var_19 = 10634420;
int var_20 = 1056108244;
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
