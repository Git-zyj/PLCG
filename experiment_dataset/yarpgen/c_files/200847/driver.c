#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)58810;
unsigned char var_3 = (unsigned char)95;
unsigned char var_5 = (unsigned char)62;
short var_10 = (short)-4681;
short var_12 = (short)-30185;
int var_15 = -56281230;
int zero = 0;
unsigned char var_17 = (unsigned char)124;
_Bool var_18 = (_Bool)0;
int var_19 = -1754669812;
unsigned char var_20 = (unsigned char)43;
int var_21 = 462373327;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
