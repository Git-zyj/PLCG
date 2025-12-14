#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1685686234;
int var_1 = -150053876;
signed char var_2 = (signed char)-86;
unsigned short var_5 = (unsigned short)7122;
int var_6 = -252643057;
unsigned long long int var_8 = 13001040388884387594ULL;
unsigned int var_9 = 1787360470U;
unsigned long long int var_10 = 17226838103824213614ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)43;
signed char var_13 = (signed char)27;
long long int var_14 = -3469882885353303812LL;
unsigned short var_15 = (unsigned short)48761;
signed char var_16 = (signed char)0;
short var_17 = (short)-6922;
short var_18 = (short)22183;
_Bool var_19 = (_Bool)1;
long long int var_20 = 7270865699014252431LL;
_Bool arr_0 [15] [15] ;
unsigned short arr_2 [15] [15] ;
long long int arr_3 [15] ;
unsigned int arr_8 [15] [15] [15] [15] ;
signed char arr_15 [17] ;
_Bool arr_16 [17] ;
long long int arr_18 [14] ;
unsigned int arr_4 [15] ;
long long int arr_5 [15] ;
long long int arr_12 [15] [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)43674;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = -8426525299609762424LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 365704729U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = -6932924096404045697LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 1576558684U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 3134573794426312624LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 6861805459553555564LL : 3576213579142499308LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
