#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1652024691U;
unsigned char var_1 = (unsigned char)254;
int var_4 = 1928876773;
int var_5 = -91170300;
int var_6 = -2100060192;
int var_7 = -1300664825;
unsigned long long int var_9 = 13217853924236904634ULL;
int var_10 = 1532142244;
unsigned char var_11 = (unsigned char)59;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 2254636446198640208ULL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3502598302U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
