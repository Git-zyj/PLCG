#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-4163;
signed char var_3 = (signed char)61;
signed char var_4 = (signed char)-73;
long long int var_5 = -7273995265249815860LL;
unsigned int var_6 = 3679753192U;
unsigned char var_7 = (unsigned char)38;
unsigned int var_8 = 2116912384U;
unsigned short var_9 = (unsigned short)53202;
short var_10 = (short)31749;
unsigned short var_12 = (unsigned short)3750;
unsigned short var_13 = (unsigned short)60358;
unsigned short var_14 = (unsigned short)37423;
long long int var_15 = 6667366182970316655LL;
unsigned short var_16 = (unsigned short)62505;
int zero = 0;
unsigned short var_17 = (unsigned short)35094;
short var_18 = (short)-27121;
unsigned char var_19 = (unsigned char)74;
unsigned char var_20 = (unsigned char)81;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-2823;
unsigned short var_23 = (unsigned short)5076;
unsigned int arr_0 [17] ;
signed char arr_1 [17] ;
short arr_4 [17] [17] ;
short arr_7 [17] [17] ;
unsigned int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 3588631848U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-14548;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-32587;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 1952712917U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
