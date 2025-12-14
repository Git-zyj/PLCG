#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30612;
long long int var_2 = -201003364229936622LL;
long long int var_3 = -7623280126470532622LL;
unsigned char var_6 = (unsigned char)127;
signed char var_8 = (signed char)54;
int var_9 = -548666197;
unsigned int var_10 = 3610373116U;
unsigned char var_12 = (unsigned char)77;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-49;
int zero = 0;
unsigned int var_16 = 1745708916U;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)36283;
signed char var_19 = (signed char)30;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
