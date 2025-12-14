#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1374690609U;
short var_2 = (short)-30994;
short var_3 = (short)9125;
int var_4 = -1709061082;
long long int var_6 = 5077692097116875557LL;
unsigned short var_9 = (unsigned short)55768;
int var_10 = -1571334211;
int var_12 = 689882799;
long long int var_13 = 5318903193020597526LL;
unsigned char var_16 = (unsigned char)242;
unsigned char var_18 = (unsigned char)140;
int zero = 0;
int var_19 = -1387836273;
unsigned short var_20 = (unsigned short)51426;
short var_21 = (short)-31587;
int var_22 = -877454184;
void init() {
}

void checksum() {
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
