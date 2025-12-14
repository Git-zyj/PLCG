#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)30;
signed char var_1 = (signed char)73;
unsigned char var_2 = (unsigned char)78;
int var_4 = -193267294;
unsigned char var_5 = (unsigned char)116;
unsigned long long int var_6 = 5426115630062431326ULL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)230;
int zero = 0;
long long int var_10 = -5686328905259117164LL;
unsigned char var_11 = (unsigned char)225;
signed char var_12 = (signed char)64;
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
