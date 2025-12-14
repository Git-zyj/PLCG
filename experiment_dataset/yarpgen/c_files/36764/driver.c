#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7648609857788768692LL;
unsigned long long int var_1 = 5033409746856523125ULL;
short var_2 = (short)-29398;
long long int var_4 = -7757704611939216069LL;
unsigned char var_6 = (unsigned char)162;
unsigned char var_8 = (unsigned char)111;
int var_11 = -133533333;
short var_12 = (short)-24956;
unsigned short var_13 = (unsigned short)52185;
int zero = 0;
unsigned short var_14 = (unsigned short)9332;
signed char var_15 = (signed char)-87;
unsigned char var_16 = (unsigned char)203;
short var_17 = (short)26652;
int arr_1 [22] [22] ;
unsigned int arr_3 [22] ;
unsigned short arr_4 [22] [22] ;
short arr_5 [22] ;
unsigned short arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = -1607978715;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 1927062036U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)5735;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)23953 : (short)-8499;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)7878 : (unsigned short)52038;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
