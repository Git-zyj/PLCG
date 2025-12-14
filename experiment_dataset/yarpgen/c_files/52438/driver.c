#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52893;
unsigned char var_1 = (unsigned char)244;
unsigned long long int var_3 = 10281286927203951323ULL;
unsigned int var_4 = 7514733U;
int var_5 = 1198662459;
_Bool var_8 = (_Bool)1;
int zero = 0;
short var_10 = (short)-26417;
unsigned long long int var_11 = 1851990040469959663ULL;
signed char var_12 = (signed char)-1;
int var_13 = 1919085954;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
