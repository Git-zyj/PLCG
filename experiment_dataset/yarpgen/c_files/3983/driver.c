#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-41;
unsigned long long int var_2 = 12790718114638916989ULL;
unsigned short var_3 = (unsigned short)49812;
unsigned int var_4 = 2995956861U;
int var_9 = 790153092;
int var_11 = -2085459908;
long long int var_13 = -6611368371895729109LL;
signed char var_14 = (signed char)108;
long long int var_16 = 74393122321617242LL;
unsigned char var_17 = (unsigned char)215;
int zero = 0;
unsigned char var_18 = (unsigned char)104;
int var_19 = -964151785;
_Bool var_20 = (_Bool)1;
long long int var_21 = -7350171054814665914LL;
unsigned char var_22 = (unsigned char)99;
int var_23 = 854751508;
unsigned short var_24 = (unsigned short)4138;
_Bool var_25 = (_Bool)1;
long long int var_26 = 3689791367187902820LL;
unsigned int var_27 = 3184998948U;
unsigned long long int var_28 = 8863812867102308332ULL;
unsigned long long int var_29 = 3080045808056635017ULL;
signed char var_30 = (signed char)53;
unsigned long long int arr_0 [25] ;
unsigned char arr_5 [20] [20] ;
unsigned int arr_12 [20] [20] [20] ;
long long int arr_7 [20] ;
unsigned char arr_8 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 10832048819876204297ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 1251895366U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = -3659877715141036875LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)127;
}

void checksum() {
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
