#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1233915160U;
_Bool var_3 = (_Bool)1;
int var_5 = 884842318;
short var_6 = (short)-23341;
_Bool var_8 = (_Bool)0;
int var_11 = 1706724170;
unsigned char var_13 = (unsigned char)157;
unsigned short var_14 = (unsigned short)6497;
int var_16 = -257710641;
signed char var_17 = (signed char)80;
int zero = 0;
long long int var_19 = 2609095471087886213LL;
signed char var_20 = (signed char)(-127 - 1);
unsigned char var_21 = (unsigned char)205;
_Bool var_22 = (_Bool)1;
int var_23 = 462982078;
short var_24 = (short)29672;
short var_25 = (short)-24212;
unsigned char var_26 = (unsigned char)151;
long long int var_27 = -4196281577301344431LL;
signed char var_28 = (signed char)43;
long long int var_29 = 4215145012818195935LL;
signed char arr_1 [14] [14] ;
short arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-14413;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
