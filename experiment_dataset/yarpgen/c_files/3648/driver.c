#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)3;
signed char var_1 = (signed char)-49;
long long int var_2 = -8836615943147650726LL;
long long int var_3 = -4671762445807179459LL;
unsigned short var_4 = (unsigned short)18663;
signed char var_7 = (signed char)80;
unsigned short var_8 = (unsigned short)60045;
short var_9 = (short)-27442;
signed char var_11 = (signed char)96;
int zero = 0;
signed char var_12 = (signed char)-102;
short var_13 = (short)24624;
unsigned short var_14 = (unsigned short)34821;
signed char var_15 = (signed char)91;
signed char var_16 = (signed char)-13;
signed char var_17 = (signed char)34;
long long int var_18 = 8389705575650527143LL;
unsigned short var_19 = (unsigned short)21755;
unsigned short var_20 = (unsigned short)63090;
long long int var_21 = -2520600826678211923LL;
short var_22 = (short)-17473;
short var_23 = (short)-16094;
unsigned short var_24 = (unsigned short)35533;
long long int var_25 = -1370635905702876502LL;
short var_26 = (short)19420;
long long int var_27 = -6453208648632820650LL;
short arr_0 [14] ;
long long int arr_1 [14] ;
short arr_2 [14] ;
short arr_4 [14] [14] [14] ;
signed char arr_5 [14] ;
long long int arr_8 [14] [14] ;
signed char arr_11 [14] [14] [14] ;
short arr_3 [14] [14] ;
short arr_6 [14] ;
long long int arr_15 [14] ;
signed char arr_21 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)-8519;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -2585129573229320874LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)10657;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)19054;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = -2185446797111761927LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-27524;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)28706 : (short)21466;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? -8346570883715149543LL : -6742781424444039864LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)123;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
