#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5401850420994555551ULL;
int var_1 = -326796550;
short var_2 = (short)-1834;
unsigned short var_3 = (unsigned short)29456;
unsigned long long int var_4 = 12392270583619325056ULL;
long long int var_5 = -390931360971072955LL;
unsigned short var_6 = (unsigned short)31606;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-89;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 10078086038974439278ULL;
long long int var_11 = -4963228457409771180LL;
unsigned long long int var_12 = 11244241991226545903ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)45883;
unsigned long long int var_15 = 12211417947819445532ULL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-22148;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
