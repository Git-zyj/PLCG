#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
unsigned char var_1 = (unsigned char)131;
unsigned char var_2 = (unsigned char)219;
unsigned char var_3 = (unsigned char)104;
unsigned char var_4 = (unsigned char)82;
unsigned long long int var_6 = 7421437762035854056ULL;
unsigned short var_7 = (unsigned short)54521;
long long int var_8 = -1090271193890499126LL;
unsigned char var_9 = (unsigned char)84;
unsigned short var_10 = (unsigned short)11325;
unsigned char var_14 = (unsigned char)101;
int var_15 = -954866399;
int var_16 = -2063955142;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 7467063065926100283LL;
short var_20 = (short)-14307;
short var_21 = (short)3656;
int var_22 = 1077092617;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
