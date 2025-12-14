#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)17063;
int var_4 = 742676640;
_Bool var_5 = (_Bool)1;
short var_6 = (short)13151;
unsigned short var_7 = (unsigned short)8035;
unsigned long long int var_8 = 9459576282795085973ULL;
int var_11 = -1404420870;
unsigned char var_12 = (unsigned char)170;
short var_13 = (short)32048;
unsigned char var_15 = (unsigned char)7;
int var_16 = 333107672;
int zero = 0;
unsigned short var_18 = (unsigned short)16219;
unsigned char var_19 = (unsigned char)252;
short var_20 = (short)-28913;
void init() {
}

void checksum() {
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
