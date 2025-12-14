#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1554252640;
short var_3 = (short)-29439;
int var_6 = 158835197;
signed char var_7 = (signed char)106;
unsigned char var_9 = (unsigned char)134;
unsigned short var_11 = (unsigned short)55162;
signed char var_12 = (signed char)99;
long long int var_13 = -3792990742546963995LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)36;
unsigned char var_17 = (unsigned char)208;
int var_18 = -1353186167;
void init() {
}

void checksum() {
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
