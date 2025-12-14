#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-51;
unsigned short var_2 = (unsigned short)36358;
_Bool var_4 = (_Bool)1;
int var_6 = 951286735;
signed char var_8 = (signed char)67;
unsigned short var_9 = (unsigned short)38143;
int zero = 0;
signed char var_11 = (signed char)108;
signed char var_12 = (signed char)7;
signed char var_13 = (signed char)28;
unsigned int var_14 = 9031546U;
signed char var_15 = (signed char)-59;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-125;
signed char arr_0 [14] ;
unsigned short arr_1 [14] [14] ;
unsigned short arr_4 [15] ;
int arr_5 [15] [15] ;
signed char arr_2 [14] ;
unsigned char arr_3 [14] ;
int arr_6 [15] ;
unsigned char arr_7 [15] ;
signed char arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)114 : (signed char)34;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)25788 : (unsigned short)45018;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)56938;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = -1764480647;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)79 : (signed char)50;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)38 : (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = -1664484246;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (signed char)-89;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
