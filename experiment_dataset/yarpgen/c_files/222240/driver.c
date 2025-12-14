#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48202;
unsigned char var_2 = (unsigned char)78;
unsigned char var_3 = (unsigned char)228;
signed char var_4 = (signed char)31;
unsigned char var_5 = (unsigned char)30;
short var_6 = (short)32032;
unsigned long long int var_7 = 14036375831884859206ULL;
unsigned short var_8 = (unsigned short)28568;
_Bool var_9 = (_Bool)0;
short var_13 = (short)-38;
unsigned char var_14 = (unsigned char)49;
unsigned int var_15 = 3090431220U;
signed char var_16 = (signed char)-120;
unsigned int var_17 = 840095528U;
int zero = 0;
int var_19 = 692632542;
unsigned char var_20 = (unsigned char)214;
unsigned short var_21 = (unsigned short)50784;
unsigned int var_22 = 135361112U;
long long int var_23 = -3583913890100025671LL;
_Bool var_24 = (_Bool)0;
int var_25 = -420899276;
long long int var_26 = -3188184407414682239LL;
unsigned long long int var_27 = 3122804387783153467ULL;
signed char arr_3 [20] [20] ;
unsigned char arr_8 [20] ;
short arr_9 [20] ;
_Bool arr_12 [20] ;
signed char arr_13 [20] ;
signed char arr_18 [20] ;
long long int arr_19 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)95 : (signed char)-37;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (short)17667;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (signed char)-17 : (signed char)82;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? 4312647930814563283LL : 604130685081173650LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
