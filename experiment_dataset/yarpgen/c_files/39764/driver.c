#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-2;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)77;
unsigned short var_7 = (unsigned short)38765;
unsigned short var_8 = (unsigned short)52925;
short var_9 = (short)-27101;
unsigned long long int var_10 = 4774849314894389536ULL;
unsigned char var_11 = (unsigned char)133;
int zero = 0;
unsigned short var_13 = (unsigned short)39249;
short var_14 = (short)4654;
unsigned short var_15 = (unsigned short)9323;
void init() {
}

void checksum() {
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
