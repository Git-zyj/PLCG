#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 17294763866933288043ULL;
unsigned int var_3 = 1930166364U;
unsigned long long int var_4 = 7129126737835093918ULL;
unsigned char var_5 = (unsigned char)165;
signed char var_6 = (signed char)2;
long long int var_7 = 7929913876192858481LL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int var_10 = -936972577;
int zero = 0;
unsigned int var_11 = 2617692820U;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)70;
short var_14 = (short)-13288;
unsigned short var_15 = (unsigned short)31301;
int var_16 = -1755878279;
unsigned char var_17 = (unsigned char)98;
short var_18 = (short)-124;
signed char arr_1 [10] ;
unsigned int arr_4 [10] [10] ;
signed char arr_8 [10] ;
short arr_13 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 2570961970U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = (short)7132;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
