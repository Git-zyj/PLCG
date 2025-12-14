#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)154;
unsigned char var_2 = (unsigned char)43;
unsigned char var_3 = (unsigned char)78;
unsigned int var_4 = 331128887U;
unsigned long long int var_5 = 8049195595869469196ULL;
unsigned short var_6 = (unsigned short)1376;
unsigned long long int var_8 = 10728353619893622935ULL;
long long int var_10 = 7421640596880314217LL;
int var_12 = 1345568061;
short var_13 = (short)30377;
unsigned int var_14 = 2819220818U;
short var_15 = (short)17106;
int zero = 0;
signed char var_17 = (signed char)-73;
_Bool var_18 = (_Bool)1;
int var_19 = -1405113321;
unsigned int var_20 = 1075574488U;
short var_21 = (short)17495;
short var_22 = (short)-6740;
unsigned int var_23 = 2747338655U;
unsigned int var_24 = 407747430U;
unsigned short var_25 = (unsigned short)59707;
long long int var_26 = -471561518237833060LL;
long long int arr_5 [21] [21] [21] [21] ;
long long int arr_10 [21] [21] [21] [21] [21] ;
unsigned char arr_13 [21] ;
signed char arr_12 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 8897957728919703051LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = -1924878367473961346LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)33 : (signed char)110;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
