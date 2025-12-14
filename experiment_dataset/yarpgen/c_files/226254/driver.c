#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1474437667;
unsigned char var_2 = (unsigned char)72;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 16022456494304766996ULL;
unsigned short var_6 = (unsigned short)1341;
long long int var_12 = -1346525348948642833LL;
unsigned long long int var_13 = 15879720781498345644ULL;
unsigned long long int var_14 = 7933869870503206585ULL;
int var_15 = 70831396;
int zero = 0;
unsigned long long int var_16 = 15947523023264264329ULL;
unsigned char var_17 = (unsigned char)135;
unsigned long long int var_18 = 12506576424136377685ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
