#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 226004118U;
signed char var_2 = (signed char)-126;
_Bool var_5 = (_Bool)0;
int var_6 = -1441248798;
int var_7 = -694474523;
short var_8 = (short)9396;
unsigned long long int var_12 = 14557632678440354461ULL;
short var_13 = (short)-6510;
unsigned char var_14 = (unsigned char)106;
int zero = 0;
unsigned short var_15 = (unsigned short)61608;
unsigned char var_16 = (unsigned char)70;
short var_17 = (short)-27168;
long long int var_18 = -3777152060123439712LL;
unsigned char var_19 = (unsigned char)232;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
