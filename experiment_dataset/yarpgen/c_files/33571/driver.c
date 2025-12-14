#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35765;
signed char var_1 = (signed char)-95;
signed char var_2 = (signed char)10;
signed char var_3 = (signed char)-38;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-22857;
unsigned short var_8 = (unsigned short)41242;
unsigned char var_9 = (unsigned char)100;
unsigned short var_10 = (unsigned short)2860;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 4099118317U;
unsigned short var_14 = (unsigned short)31093;
signed char var_15 = (signed char)7;
short var_16 = (short)-21014;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
