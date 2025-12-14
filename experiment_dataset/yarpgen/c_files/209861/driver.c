#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13883239502678244004ULL;
int var_2 = 887936768;
unsigned long long int var_3 = 18321715031143642590ULL;
unsigned long long int var_4 = 12912356235189353958ULL;
int var_5 = 1096356911;
short var_6 = (short)-17574;
int var_7 = -864793016;
int var_8 = 1744486158;
int var_9 = -523846878;
short var_10 = (short)31028;
int zero = 0;
unsigned char var_11 = (unsigned char)220;
unsigned short var_12 = (unsigned short)12237;
unsigned int var_13 = 385067475U;
unsigned short var_14 = (unsigned short)13155;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
