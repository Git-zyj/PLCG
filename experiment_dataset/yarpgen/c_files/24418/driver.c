#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 4273958;
unsigned long long int var_1 = 10644375267175918586ULL;
unsigned short var_2 = (unsigned short)48036;
short var_3 = (short)-31500;
int var_4 = 623861663;
unsigned char var_5 = (unsigned char)211;
short var_6 = (short)-12550;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)38768;
int zero = 0;
int var_13 = -1874866128;
long long int var_14 = -4714450050413811574LL;
unsigned short var_15 = (unsigned short)62119;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 16544233599560689613ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
