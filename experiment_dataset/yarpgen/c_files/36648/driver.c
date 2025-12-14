#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1502917537;
unsigned short var_6 = (unsigned short)3153;
unsigned int var_7 = 3950131646U;
unsigned short var_10 = (unsigned short)33115;
signed char var_16 = (signed char)-27;
int zero = 0;
long long int var_19 = -8534615956234207454LL;
unsigned int var_20 = 2852058074U;
unsigned char var_21 = (unsigned char)97;
unsigned int var_22 = 2001888093U;
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
