#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)124;
_Bool var_3 = (_Bool)0;
unsigned int var_7 = 675543376U;
int var_8 = 1497341743;
unsigned char var_10 = (unsigned char)63;
unsigned char var_11 = (unsigned char)113;
short var_13 = (short)9250;
int var_16 = -582520049;
int zero = 0;
unsigned char var_17 = (unsigned char)47;
int var_18 = -778252217;
unsigned long long int var_19 = 15618778316490665151ULL;
unsigned int var_20 = 3865502033U;
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
