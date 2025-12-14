#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1443407825U;
unsigned short var_3 = (unsigned short)12153;
int var_4 = -2046027082;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2749547010U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 18351979514016871631ULL;
unsigned short var_12 = (unsigned short)34855;
unsigned short var_13 = (unsigned short)31411;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
