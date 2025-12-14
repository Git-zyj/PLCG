#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3169;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)46;
unsigned long long int var_3 = 7180146916929181316ULL;
unsigned short var_4 = (unsigned short)62468;
signed char var_6 = (signed char)-21;
short var_8 = (short)-4346;
signed char var_9 = (signed char)12;
unsigned int var_10 = 3761184295U;
unsigned int var_11 = 3215058114U;
int zero = 0;
signed char var_12 = (signed char)42;
unsigned short var_13 = (unsigned short)14207;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
