#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1926714486;
long long int var_3 = -2966236278097791908LL;
signed char var_4 = (signed char)-92;
int var_5 = -1760177627;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 6969963828635317199ULL;
unsigned long long int var_8 = 4566998890857090296ULL;
unsigned long long int var_9 = 1813100607730592186ULL;
unsigned char var_10 = (unsigned char)66;
short var_11 = (short)28710;
signed char var_12 = (signed char)56;
long long int var_14 = 6688814024948950702LL;
int var_15 = -1532751252;
long long int var_17 = 6362706802375214350LL;
int zero = 0;
long long int var_20 = -916682313076582060LL;
short var_21 = (short)25147;
unsigned int var_22 = 2339564190U;
long long int var_23 = 2684862649838566533LL;
signed char var_24 = (signed char)-101;
int var_25 = -1805130731;
unsigned long long int var_26 = 15557556058600474772ULL;
int arr_0 [17] ;
unsigned long long int arr_1 [17] [17] ;
unsigned long long int arr_4 [17] [17] ;
_Bool arr_8 [17] [17] [17] [17] ;
int arr_10 [25] ;
unsigned int arr_11 [25] [25] ;
int arr_5 [17] [17] [17] ;
long long int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1154696860;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 4076230940179275047ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 6378655131337535871ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 1792852330;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = 3795490608U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1660366026;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = -461515613978122545LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
