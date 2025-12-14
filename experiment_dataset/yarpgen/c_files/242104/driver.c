#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29095;
unsigned long long int var_1 = 7675313531179323033ULL;
unsigned short var_5 = (unsigned short)6105;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)144;
unsigned short var_13 = (unsigned short)31225;
int var_15 = 534703894;
int zero = 0;
short var_16 = (short)-17812;
int var_17 = 1729182244;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 11005780962802313553ULL;
short var_20 = (short)27224;
int var_21 = 1144276321;
unsigned short arr_1 [11] [11] ;
_Bool arr_3 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)10589;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
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
