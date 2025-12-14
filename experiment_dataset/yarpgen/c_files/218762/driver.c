#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)148;
int var_1 = -1230362546;
int var_2 = -1360043037;
unsigned int var_3 = 1563699542U;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 2218280687U;
_Bool var_8 = (_Bool)0;
long long int var_9 = -9027890577965757981LL;
unsigned int var_10 = 1196844964U;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-6;
unsigned int var_13 = 3520601102U;
short var_14 = (short)14957;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)12512;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)9055;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
