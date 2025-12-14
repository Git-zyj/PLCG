#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7961;
unsigned short var_1 = (unsigned short)45921;
long long int var_2 = -6957040502973502712LL;
unsigned char var_4 = (unsigned char)124;
unsigned int var_6 = 1929114084U;
unsigned short var_9 = (unsigned short)1022;
short var_14 = (short)19937;
int var_16 = -828037354;
short var_18 = (short)1162;
int zero = 0;
unsigned short var_20 = (unsigned short)20136;
unsigned char var_21 = (unsigned char)38;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)85;
int var_24 = -1082410829;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
