#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1286382555058435746ULL;
unsigned char var_3 = (unsigned char)7;
int var_4 = -241274955;
short var_5 = (short)-22176;
signed char var_6 = (signed char)-121;
unsigned int var_7 = 3262833889U;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)63459;
unsigned short var_11 = (unsigned short)1970;
unsigned short var_12 = (unsigned short)8039;
unsigned char var_15 = (unsigned char)205;
unsigned char var_16 = (unsigned char)194;
int zero = 0;
int var_19 = -1681355279;
int var_20 = 2142262804;
unsigned long long int var_21 = 4598491530817013175ULL;
signed char var_22 = (signed char)-106;
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
