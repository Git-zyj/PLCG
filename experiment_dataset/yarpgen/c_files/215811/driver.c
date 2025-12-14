#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25344;
_Bool var_3 = (_Bool)1;
long long int var_4 = 8709059277134109542LL;
long long int var_8 = -3288040103199045724LL;
int var_14 = -905668027;
int zero = 0;
unsigned int var_17 = 2231603438U;
unsigned long long int var_18 = 14512827498445812862ULL;
unsigned short var_19 = (unsigned short)64399;
unsigned short var_20 = (unsigned short)43846;
_Bool var_21 = (_Bool)0;
long long int var_22 = 1637247562304373969LL;
unsigned int var_23 = 3653917419U;
long long int arr_0 [16] ;
unsigned int arr_3 [16] ;
int arr_9 [16] ;
unsigned short arr_11 [16] [16] [16] ;
unsigned char arr_18 [16] [16] ;
int arr_14 [16] ;
signed char arr_15 [16] [16] [16] ;
int arr_19 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -6521521270792082558LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1380834080U : 4087474628U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = -1140396576;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)13543 : (unsigned short)6317;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 191797164 : -1100224845;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)78 : (signed char)109;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = -1586582814;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
