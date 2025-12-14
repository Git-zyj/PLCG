#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)47421;
signed char var_4 = (signed char)-9;
short var_5 = (short)-2171;
short var_6 = (short)879;
unsigned int var_7 = 2179550196U;
unsigned char var_8 = (unsigned char)5;
unsigned short var_9 = (unsigned short)41999;
unsigned int var_12 = 2535314021U;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = 3901928039917409482LL;
unsigned char var_15 = (unsigned char)0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 9317125718127897848ULL;
unsigned char var_18 = (unsigned char)115;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
