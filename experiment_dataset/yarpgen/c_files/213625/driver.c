#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10912;
long long int var_2 = -5830551154964741159LL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)10086;
signed char var_6 = (signed char)-65;
signed char var_8 = (signed char)101;
unsigned short var_9 = (unsigned short)22496;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-14248;
signed char var_13 = (signed char)-21;
int zero = 0;
long long int var_14 = -4127528406234173596LL;
unsigned long long int var_15 = 12605060413370842400ULL;
unsigned char var_16 = (unsigned char)241;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
