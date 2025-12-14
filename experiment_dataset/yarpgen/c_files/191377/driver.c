#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6282249289146252355LL;
unsigned long long int var_1 = 2421334214146479190ULL;
unsigned char var_3 = (unsigned char)209;
unsigned short var_4 = (unsigned short)16334;
int var_5 = -1994958069;
int var_7 = -279944493;
unsigned int var_8 = 36449197U;
int var_9 = -1052533005;
unsigned int var_10 = 865347056U;
int var_11 = 1815540703;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-54;
long long int var_15 = -1173336397191992143LL;
int zero = 0;
unsigned char var_16 = (unsigned char)191;
unsigned int var_17 = 2873368461U;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)218;
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
