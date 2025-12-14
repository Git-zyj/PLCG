#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6291;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 12062474294739238305ULL;
unsigned char var_6 = (unsigned char)56;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)43945;
short var_10 = (short)-4087;
short var_12 = (short)-16479;
int zero = 0;
short var_18 = (short)375;
unsigned char var_19 = (unsigned char)166;
int var_20 = -747525538;
int var_21 = -2131546023;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
