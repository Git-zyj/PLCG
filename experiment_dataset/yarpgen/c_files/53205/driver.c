#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4903617131380031501LL;
unsigned long long int var_3 = 4398760647838668203ULL;
long long int var_4 = -5300263259957981946LL;
long long int var_5 = 8374478391426109739LL;
long long int var_6 = 3868693054880109886LL;
unsigned short var_7 = (unsigned short)15683;
long long int var_8 = 1603621279353042775LL;
unsigned char var_10 = (unsigned char)64;
int zero = 0;
unsigned short var_11 = (unsigned short)3350;
unsigned short var_12 = (unsigned short)42893;
unsigned short var_13 = (unsigned short)65305;
int var_14 = -1064570947;
unsigned char var_15 = (unsigned char)175;
int var_16 = -770278913;
unsigned short var_17 = (unsigned short)17419;
long long int arr_0 [20] ;
unsigned char arr_2 [20] [20] ;
unsigned long long int arr_4 [20] [20] ;
long long int arr_5 [20] [20] [20] ;
unsigned char arr_6 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -5668372892867955262LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 14320516090076388959ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -2338443312106408207LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)88;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
