#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)9721;
short var_3 = (short)-31459;
unsigned char var_5 = (unsigned char)242;
unsigned char var_8 = (unsigned char)17;
unsigned short var_10 = (unsigned short)42136;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)147;
unsigned char var_16 = (unsigned char)94;
unsigned long long int var_17 = 9552853896370476587ULL;
int zero = 0;
unsigned long long int var_19 = 9310933322506729974ULL;
unsigned int var_20 = 2728838914U;
unsigned long long int var_21 = 6061003577525483571ULL;
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
