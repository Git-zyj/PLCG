#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -452188610;
long long int var_1 = 7723664539168948725LL;
short var_2 = (short)3059;
int var_3 = -626126707;
int var_4 = 250377303;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)32375;
unsigned long long int var_7 = 16554630069606309266ULL;
int var_8 = -1529975322;
int var_9 = 349191583;
int var_10 = -628871867;
int zero = 0;
unsigned int var_11 = 1420984459U;
unsigned short var_12 = (unsigned short)53771;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)8;
unsigned short var_15 = (unsigned short)32383;
unsigned char var_16 = (unsigned char)156;
unsigned char var_17 = (unsigned char)235;
unsigned short var_18 = (unsigned short)64049;
unsigned int arr_3 [13] ;
short arr_9 [13] ;
int arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 1407170024U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)-27559 : (short)-23700;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = -1397103652;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
