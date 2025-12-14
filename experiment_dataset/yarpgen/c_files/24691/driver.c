#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 107274466U;
short var_2 = (short)-24315;
unsigned int var_5 = 3262742148U;
int var_7 = -165421488;
unsigned short var_8 = (unsigned short)1848;
unsigned int var_10 = 5389243U;
unsigned short var_13 = (unsigned short)5454;
int var_14 = -1833822093;
unsigned int var_15 = 479610717U;
unsigned short var_16 = (unsigned short)62427;
int zero = 0;
signed char var_17 = (signed char)2;
unsigned short var_18 = (unsigned short)34511;
int var_19 = -638017756;
long long int var_20 = 2604718490180996859LL;
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
