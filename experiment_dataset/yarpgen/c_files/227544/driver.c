#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)22863;
signed char var_4 = (signed char)-32;
unsigned short var_5 = (unsigned short)5044;
_Bool var_8 = (_Bool)0;
long long int var_9 = 1602361880147888090LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 12948401445938133011ULL;
unsigned char var_13 = (unsigned char)147;
int zero = 0;
short var_19 = (short)-6226;
unsigned long long int var_20 = 9678451773848452000ULL;
int var_21 = 1455817362;
_Bool var_22 = (_Bool)1;
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
