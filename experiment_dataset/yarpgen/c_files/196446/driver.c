#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1833596014;
unsigned short var_3 = (unsigned short)40503;
signed char var_6 = (signed char)87;
short var_7 = (short)8148;
unsigned short var_9 = (unsigned short)25054;
int var_11 = 1288267245;
int var_12 = 1198039028;
unsigned char var_15 = (unsigned char)6;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-7229;
short var_18 = (short)-29269;
int var_19 = 947287260;
int var_20 = -548767639;
short var_21 = (short)-10493;
unsigned int var_22 = 2192501978U;
unsigned int arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 1962284341U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
