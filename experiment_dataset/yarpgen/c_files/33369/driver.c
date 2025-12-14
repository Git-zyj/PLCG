#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)57;
short var_3 = (short)-16619;
unsigned short var_5 = (unsigned short)6857;
long long int var_7 = -3279896584600480514LL;
signed char var_9 = (signed char)2;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)167;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)26441;
unsigned char var_17 = (unsigned char)155;
unsigned short var_18 = (unsigned short)63250;
unsigned char var_19 = (unsigned char)168;
long long int arr_1 [25] ;
unsigned char arr_6 [25] ;
long long int arr_8 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 3306944876550001074LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)103 : (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -5410095286557697260LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
