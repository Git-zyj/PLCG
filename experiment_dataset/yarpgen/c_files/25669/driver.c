#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)33432;
unsigned long long int var_5 = 16166482540584505990ULL;
unsigned short var_6 = (unsigned short)51715;
signed char var_7 = (signed char)-58;
short var_9 = (short)8823;
long long int var_10 = 350453878538950732LL;
unsigned char var_11 = (unsigned char)144;
int zero = 0;
signed char var_13 = (signed char)115;
short var_14 = (short)-22216;
signed char var_15 = (signed char)0;
long long int var_16 = -7780100726202314074LL;
short var_17 = (short)-30605;
unsigned short arr_5 [20] [20] ;
signed char arr_8 [20] ;
unsigned char arr_13 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)3817 : (unsigned short)29364;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)70 : (unsigned char)104;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
