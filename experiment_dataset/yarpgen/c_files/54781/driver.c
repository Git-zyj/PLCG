#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11733;
_Bool var_1 = (_Bool)1;
int var_3 = -274190159;
unsigned char var_5 = (unsigned char)234;
signed char var_6 = (signed char)86;
unsigned char var_13 = (unsigned char)212;
unsigned char var_16 = (unsigned char)202;
int zero = 0;
short var_18 = (short)28600;
unsigned char var_19 = (unsigned char)68;
signed char var_20 = (signed char)-91;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 237497355U;
long long int arr_1 [22] [22] ;
short arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = -3926535309174376024LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)-22480;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
