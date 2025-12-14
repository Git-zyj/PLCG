#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)248;
short var_2 = (short)21693;
long long int var_3 = -3743005583569371779LL;
short var_4 = (short)11009;
int var_6 = 1766417712;
short var_7 = (short)784;
signed char var_9 = (signed char)119;
unsigned long long int var_10 = 17188084686182993581ULL;
int zero = 0;
int var_11 = -613500672;
unsigned short var_12 = (unsigned short)4825;
unsigned char var_13 = (unsigned char)5;
unsigned short var_14 = (unsigned short)34642;
unsigned char var_15 = (unsigned char)30;
unsigned char var_16 = (unsigned char)78;
short arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-13048;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
