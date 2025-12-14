#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)100;
long long int var_3 = 4948007984581877357LL;
unsigned char var_4 = (unsigned char)149;
unsigned long long int var_6 = 4272622526573838525ULL;
signed char var_7 = (signed char)-31;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 47806953U;
int var_10 = -261009336;
unsigned char var_12 = (unsigned char)36;
unsigned short var_14 = (unsigned short)34619;
long long int var_15 = -2970644314833888085LL;
int zero = 0;
long long int var_17 = -1650967328507061149LL;
signed char var_18 = (signed char)-25;
long long int var_19 = -4790209094397163146LL;
short var_20 = (short)-18039;
signed char var_21 = (signed char)32;
unsigned short var_22 = (unsigned short)57496;
short var_23 = (short)-15979;
unsigned int var_24 = 1590060183U;
int arr_0 [20] ;
unsigned short arr_1 [20] ;
unsigned char arr_2 [20] ;
_Bool arr_5 [20] ;
unsigned char arr_6 [20] [20] ;
long long int arr_3 [20] ;
int arr_4 [20] ;
int arr_7 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 120459798 : 875827687;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)35751;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)31 : (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -6933808746649968480LL : -5498125472387726336LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1911222626 : 1194116763;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = 1896820341;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
