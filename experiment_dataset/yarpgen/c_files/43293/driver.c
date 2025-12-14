#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9183185366080370225ULL;
_Bool var_1 = (_Bool)0;
int var_2 = -484971121;
int var_3 = -1527886066;
signed char var_5 = (signed char)70;
unsigned int var_6 = 2553533233U;
unsigned int var_7 = 445574438U;
int var_9 = 225475299;
long long int var_10 = -7115720493498470181LL;
unsigned int var_11 = 2416966790U;
signed char var_12 = (signed char)-107;
unsigned short var_13 = (unsigned short)2162;
int zero = 0;
short var_14 = (short)-10723;
long long int var_15 = -1357898091168873665LL;
unsigned int var_16 = 4220329697U;
unsigned char var_17 = (unsigned char)46;
void init() {
}

void checksum() {
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
