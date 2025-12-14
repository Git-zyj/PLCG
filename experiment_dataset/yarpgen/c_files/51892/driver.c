#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)109;
int var_2 = 1699233860;
unsigned char var_3 = (unsigned char)132;
unsigned long long int var_4 = 9419388248984295460ULL;
unsigned short var_6 = (unsigned short)55511;
short var_7 = (short)-31020;
_Bool var_8 = (_Bool)0;
int var_9 = -228345694;
unsigned int var_10 = 2527880467U;
unsigned short var_11 = (unsigned short)1438;
int zero = 0;
int var_13 = 649662228;
unsigned short var_14 = (unsigned short)43289;
unsigned short var_15 = (unsigned short)52741;
unsigned short var_16 = (unsigned short)32168;
void init() {
}

void checksum() {
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
