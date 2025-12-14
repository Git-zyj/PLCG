#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 8103868768562539404ULL;
unsigned char var_3 = (unsigned char)105;
unsigned long long int var_4 = 16636256009469558852ULL;
unsigned long long int var_5 = 124881065551369706ULL;
unsigned long long int var_6 = 6811172845289221685ULL;
signed char var_8 = (signed char)101;
short var_9 = (short)-12847;
signed char var_10 = (signed char)-67;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_19 = -1760489311812337430LL;
short var_20 = (short)30878;
short var_21 = (short)160;
unsigned int var_22 = 990044403U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
