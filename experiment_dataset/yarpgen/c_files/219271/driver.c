#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)111;
short var_3 = (short)24752;
unsigned char var_4 = (unsigned char)184;
_Bool var_5 = (_Bool)1;
int var_8 = -1090930749;
unsigned short var_9 = (unsigned short)10016;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 11469442769793645600ULL;
int var_14 = -1894890709;
int zero = 0;
unsigned char var_15 = (unsigned char)157;
short var_16 = (short)-20203;
unsigned long long int var_17 = 9354425394978465517ULL;
int var_18 = 1915249332;
unsigned char var_19 = (unsigned char)241;
int var_20 = -12256749;
unsigned int var_21 = 1682657898U;
unsigned char var_22 = (unsigned char)202;
unsigned char arr_0 [13] ;
unsigned long long int arr_1 [13] ;
signed char arr_3 [16] [16] ;
unsigned long long int arr_5 [16] [16] ;
int arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 9598829349844064766ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 8414429023471266265ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = -1781711542;
}

void checksum() {
    hash(&seed, var_15);
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
