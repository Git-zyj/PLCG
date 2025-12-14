#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)84;
int var_2 = -22310119;
int var_4 = 771177509;
int var_6 = 1303239833;
short var_7 = (short)-1527;
unsigned int var_8 = 2927811340U;
unsigned short var_9 = (unsigned short)39038;
short var_10 = (short)-25003;
short var_11 = (short)-30957;
unsigned short var_13 = (unsigned short)35314;
unsigned long long int var_14 = 11295282286845316970ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)19521;
unsigned short var_17 = (unsigned short)10191;
short var_18 = (short)19932;
unsigned short var_19 = (unsigned short)52018;
signed char var_20 = (signed char)17;
long long int var_21 = -6079449676370033898LL;
unsigned short var_22 = (unsigned short)21788;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 13274845297506427745ULL;
int arr_0 [25] ;
short arr_2 [25] ;
unsigned char arr_3 [25] ;
unsigned short arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -1427230745;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-23220 : (short)4843;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)118 : (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)24747 : (unsigned short)40012;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
