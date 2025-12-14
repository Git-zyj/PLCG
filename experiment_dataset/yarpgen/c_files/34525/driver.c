#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1568836398U;
unsigned long long int var_5 = 6176146502906349483ULL;
unsigned char var_7 = (unsigned char)250;
unsigned long long int var_8 = 15432872932382458807ULL;
int var_10 = -839245727;
unsigned long long int var_12 = 11720365272925879567ULL;
unsigned int var_14 = 1985159737U;
unsigned int var_16 = 2413980407U;
unsigned int var_17 = 1100442839U;
signed char var_18 = (signed char)-73;
int zero = 0;
unsigned long long int var_19 = 7697288231577912867ULL;
short var_20 = (short)-30641;
unsigned int var_21 = 1142601068U;
int var_22 = 311284357;
short var_23 = (short)-15236;
unsigned short var_24 = (unsigned short)46636;
short var_25 = (short)11902;
unsigned long long int var_26 = 8263264614552393752ULL;
short var_27 = (short)14180;
short var_28 = (short)230;
unsigned long long int arr_0 [25] [25] ;
unsigned long long int arr_1 [25] ;
short arr_10 [25] [25] ;
unsigned int arr_11 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 12178401788808857453ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 5756602252662032820ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-28250 : (short)27489;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 3342810949U : 3121075449U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
