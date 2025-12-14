#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
long long int var_1 = 4849210662429635839LL;
unsigned char var_2 = (unsigned char)171;
long long int var_3 = -1262687592080999492LL;
unsigned int var_4 = 3805942031U;
unsigned int var_6 = 516637122U;
int var_8 = -1806772256;
long long int var_10 = -3490714815606363842LL;
short var_11 = (short)26221;
int zero = 0;
unsigned char var_12 = (unsigned char)66;
unsigned char var_13 = (unsigned char)216;
unsigned char var_14 = (unsigned char)108;
long long int var_15 = 7418235311808585212LL;
int var_16 = 1353742384;
unsigned char var_17 = (unsigned char)103;
int var_18 = 983871588;
unsigned char var_19 = (unsigned char)250;
short var_20 = (short)-7693;
short var_21 = (short)-17458;
unsigned short var_22 = (unsigned short)28038;
unsigned int var_23 = 256014101U;
short var_24 = (short)-18899;
short var_25 = (short)30481;
unsigned int var_26 = 568836514U;
unsigned long long int arr_0 [22] ;
unsigned int arr_1 [22] [22] ;
unsigned int arr_12 [22] [22] [22] [22] [22] ;
int arr_13 [22] [22] [22] ;
long long int arr_18 [25] [25] ;
unsigned long long int arr_19 [25] ;
int arr_20 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 12290702165485480306ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 825020125U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 3640672909U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 2022212904;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = -2547926530970864292LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = 14115628530417762571ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -555160573 : 1927742461;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
