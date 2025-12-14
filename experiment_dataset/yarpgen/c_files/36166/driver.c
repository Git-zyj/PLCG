#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17120;
int var_5 = -1439648086;
short var_6 = (short)18041;
int var_8 = -83318580;
long long int var_9 = 5458932103842751070LL;
unsigned long long int var_11 = 7321312011127056476ULL;
int var_14 = 163249119;
int zero = 0;
int var_15 = -1442983935;
unsigned char var_16 = (unsigned char)50;
unsigned short var_17 = (unsigned short)65418;
unsigned long long int var_18 = 3506427148247666349ULL;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
int var_21 = -812274686;
unsigned long long int var_22 = 3666971590201651657ULL;
unsigned long long int var_23 = 2218543871659452044ULL;
unsigned char var_24 = (unsigned char)81;
int arr_0 [16] ;
int arr_2 [16] ;
long long int arr_3 [16] ;
int arr_4 [16] [16] [16] ;
signed char arr_6 [16] ;
unsigned long long int arr_10 [16] [16] ;
unsigned char arr_8 [16] ;
unsigned char arr_11 [16] ;
unsigned long long int arr_12 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1356895235;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 222582731 : 1995652186;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 1404921468906238542LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1491353915;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = 12329776024297525302ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)242 : (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)90 : (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 4004172400144654023ULL : 4593864198281972115ULL;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
