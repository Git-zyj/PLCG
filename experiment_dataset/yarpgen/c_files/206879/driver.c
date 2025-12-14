#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5426535435188919631LL;
unsigned short var_4 = (unsigned short)54716;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-30518;
short var_7 = (short)20394;
short var_8 = (short)25168;
long long int var_10 = 8178452609186521122LL;
short var_11 = (short)-4089;
short var_12 = (short)-23332;
short var_13 = (short)-26472;
int zero = 0;
unsigned int var_18 = 3702353501U;
int var_19 = 525976212;
long long int var_20 = -257187903553165938LL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-571;
_Bool var_23 = (_Bool)0;
int var_24 = 1127530072;
short arr_1 [16] [16] ;
signed char arr_5 [16] ;
short arr_7 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (short)15079;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-119 : (signed char)-86;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-26681 : (short)6725;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
