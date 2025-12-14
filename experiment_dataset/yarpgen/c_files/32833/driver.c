#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49861;
short var_2 = (short)-13130;
short var_3 = (short)32132;
unsigned short var_4 = (unsigned short)8585;
unsigned int var_7 = 2819620826U;
unsigned int var_9 = 2127211438U;
unsigned int var_11 = 2630397834U;
unsigned char var_12 = (unsigned char)221;
unsigned char var_13 = (unsigned char)55;
unsigned int var_14 = 3144730771U;
unsigned char var_15 = (unsigned char)36;
unsigned short var_16 = (unsigned short)27069;
int zero = 0;
long long int var_18 = 1832980319016475164LL;
unsigned char var_19 = (unsigned char)174;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)56076;
unsigned short arr_1 [21] [21] ;
unsigned int arr_2 [21] ;
unsigned int arr_5 [21] [21] ;
long long int arr_10 [10] ;
short arr_6 [21] [21] ;
short arr_14 [10] ;
unsigned short arr_15 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)48865;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 2395839498U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 3584044100U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = -7091119309705802701LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (short)31069;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)-11962 : (short)13801;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)25975 : (unsigned short)13184;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
