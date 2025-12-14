#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2043145740631171300LL;
unsigned short var_2 = (unsigned short)32563;
_Bool var_3 = (_Bool)0;
short var_4 = (short)20975;
unsigned short var_5 = (unsigned short)12197;
unsigned int var_6 = 3021709136U;
short var_7 = (short)-4582;
unsigned int var_8 = 2311719426U;
unsigned short var_12 = (unsigned short)17088;
unsigned char var_13 = (unsigned char)166;
int var_14 = 128471264;
int var_15 = -464022054;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)11820;
short var_18 = (short)-30756;
void init() {
}

void checksum() {
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
