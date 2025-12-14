#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65248;
unsigned short var_3 = (unsigned short)61778;
unsigned short var_5 = (unsigned short)46270;
_Bool var_6 = (_Bool)0;
unsigned char var_9 = (unsigned char)227;
int zero = 0;
signed char var_10 = (signed char)(-127 - 1);
unsigned short var_11 = (unsigned short)60807;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
