#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3278664214U;
long long int var_2 = 7308699253757108321LL;
unsigned int var_3 = 2496503539U;
unsigned long long int var_4 = 15530398381686160413ULL;
unsigned char var_7 = (unsigned char)171;
signed char var_8 = (signed char)-18;
signed char var_9 = (signed char)-48;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)51;
unsigned int var_12 = 2917193567U;
int var_13 = -105212750;
unsigned char var_14 = (unsigned char)142;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-127;
short var_18 = (short)-18502;
int arr_1 [18] [18] ;
short arr_3 [18] [18] ;
short arr_6 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? -129411700 : 896312550;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-30906 : (short)23519;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-17388 : (short)466;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
