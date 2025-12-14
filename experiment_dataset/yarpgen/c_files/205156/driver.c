#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)112;
unsigned short var_1 = (unsigned short)29701;
unsigned int var_3 = 1799432365U;
short var_5 = (short)-9291;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 4130160575794100575ULL;
signed char var_10 = (signed char)127;
int zero = 0;
long long int var_11 = -4080127772787980709LL;
unsigned char var_12 = (unsigned char)66;
signed char var_13 = (signed char)-52;
unsigned long long int var_14 = 14781293941575605368ULL;
signed char var_15 = (signed char)-122;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
