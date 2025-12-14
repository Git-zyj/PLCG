#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25442;
unsigned short var_7 = (unsigned short)22594;
signed char var_10 = (signed char)52;
unsigned char var_13 = (unsigned char)206;
signed char var_14 = (signed char)60;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 16188796045977642606ULL;
int var_21 = -693995424;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
