#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20066;
short var_3 = (short)-4352;
unsigned short var_4 = (unsigned short)62534;
int var_5 = 1103740161;
int var_10 = 1152177568;
unsigned int var_11 = 416189885U;
int var_12 = -1316997238;
short var_13 = (short)-15724;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 9151728385015308799ULL;
long long int var_18 = -1497903059090606157LL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)12;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
