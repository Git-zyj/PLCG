#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-105;
unsigned long long int var_1 = 4430294712451703996ULL;
long long int var_2 = 2862375657825077225LL;
long long int var_3 = 7652385587146079262LL;
unsigned char var_6 = (unsigned char)46;
unsigned int var_11 = 2285339199U;
unsigned int var_12 = 1433660001U;
unsigned int var_13 = 3220387362U;
int zero = 0;
int var_14 = 1774508689;
int var_15 = -1702336633;
unsigned short var_16 = (unsigned short)55185;
unsigned long long int var_17 = 6954186711009224481ULL;
unsigned long long int var_18 = 13547947758839839597ULL;
unsigned char var_19 = (unsigned char)145;
int var_20 = 1909135796;
short var_21 = (short)-2297;
unsigned int var_22 = 834132079U;
short arr_0 [22] ;
short arr_1 [22] ;
unsigned long long int arr_4 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)16354;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-17012;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 5984691422845588810ULL;
}

void checksum() {
    hash(&seed, var_14);
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
