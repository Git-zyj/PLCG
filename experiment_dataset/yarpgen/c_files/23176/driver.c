#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7631734131761769423ULL;
_Bool var_1 = (_Bool)0;
short var_3 = (short)-1789;
unsigned char var_6 = (unsigned char)50;
unsigned short var_8 = (unsigned short)42879;
unsigned short var_9 = (unsigned short)46697;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 15131332094638219779ULL;
int zero = 0;
short var_15 = (short)-14397;
_Bool var_16 = (_Bool)1;
short var_17 = (short)15724;
int var_18 = -1459649751;
int var_19 = 1146883172;
unsigned short var_20 = (unsigned short)12372;
short var_21 = (short)7999;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)11480;
short var_24 = (short)31449;
unsigned char var_25 = (unsigned char)194;
_Bool var_26 = (_Bool)0;
unsigned long long int var_27 = 12546496200682304273ULL;
int arr_1 [23] ;
short arr_2 [23] ;
long long int arr_3 [23] ;
unsigned char arr_5 [23] ;
unsigned short arr_7 [23] [23] [23] [23] ;
_Bool arr_8 [23] [23] [23] [23] ;
long long int arr_9 [23] [23] [23] [23] ;
long long int arr_11 [23] [23] [23] [23] ;
unsigned short arr_16 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 384685619;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-26847;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1586537798510496202LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)21467;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 9085666345084838960LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 4895670717788631791LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60387 : (unsigned short)46946;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
