#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8831;
unsigned char var_2 = (unsigned char)74;
short var_4 = (short)3773;
int zero = 0;
unsigned long long int var_10 = 6326931470509909286ULL;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)244;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
