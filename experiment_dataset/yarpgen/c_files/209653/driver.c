#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2853564223U;
short var_1 = (short)24170;
int var_2 = -664033156;
unsigned long long int var_3 = 12602783239527511603ULL;
short var_7 = (short)-28016;
short var_8 = (short)1900;
short var_9 = (short)8500;
unsigned long long int var_10 = 5194206845960996443ULL;
short var_11 = (short)-1508;
int zero = 0;
short var_12 = (short)27338;
unsigned int var_13 = 1409568237U;
unsigned long long int var_14 = 6912677745889518124ULL;
int var_15 = 586819287;
int var_16 = 1080358882;
int var_17 = 1865179509;
int var_18 = -1158864038;
int var_19 = 1571579306;
unsigned short var_20 = (unsigned short)36614;
unsigned int var_21 = 606325606U;
int arr_0 [11] ;
short arr_2 [11] ;
int arr_4 [14] [14] ;
int arr_5 [14] ;
int arr_6 [14] ;
short arr_9 [14] [14] ;
unsigned short arr_11 [14] [14] ;
int arr_7 [14] [14] ;
short arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -298683326;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)-30752;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = -860104718;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -1328804578;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 473362645;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-11113;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)4483 : (unsigned short)24406;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 1595289154 : -1789651588;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)20453 : (short)30486;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
