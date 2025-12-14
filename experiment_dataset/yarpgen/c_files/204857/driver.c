#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-57;
signed char var_1 = (signed char)-75;
unsigned int var_2 = 4079444902U;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 13005895380593023943ULL;
_Bool var_6 = (_Bool)1;
long long int var_7 = -3356028240496382291LL;
unsigned short var_8 = (unsigned short)63478;
int var_9 = 712736533;
unsigned int var_10 = 1460432402U;
unsigned int var_11 = 906159980U;
unsigned char var_13 = (unsigned char)15;
int zero = 0;
short var_14 = (short)-3102;
long long int var_15 = -7229819023681119059LL;
unsigned short var_16 = (unsigned short)568;
int var_17 = -207870453;
unsigned char var_18 = (unsigned char)19;
unsigned short var_19 = (unsigned short)40554;
unsigned int var_20 = 3611510145U;
int var_21 = -676121540;
_Bool var_22 = (_Bool)0;
long long int arr_9 [19] ;
int arr_10 [19] [19] ;
_Bool arr_19 [19] [19] [19] [19] [19] ;
unsigned char arr_20 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = -862182520062371147LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = -1883568221;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned char)97 : (unsigned char)67;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
