#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3215623039880138584LL;
unsigned int var_2 = 798238744U;
unsigned int var_3 = 249292702U;
unsigned long long int var_6 = 9945135378123980204ULL;
unsigned int var_7 = 608396273U;
long long int var_8 = 1881608188070288536LL;
unsigned short var_9 = (unsigned short)53724;
unsigned char var_11 = (unsigned char)215;
int zero = 0;
unsigned char var_12 = (unsigned char)95;
unsigned int var_13 = 2109364170U;
int var_14 = -2009678381;
short var_15 = (short)32308;
unsigned int var_16 = 1247812474U;
long long int var_17 = -7417698687543934661LL;
unsigned int var_18 = 106809694U;
unsigned int var_19 = 1004419944U;
long long int var_20 = -4957372529919339184LL;
long long int var_21 = 7514810285043283331LL;
unsigned short var_22 = (unsigned short)536;
unsigned int arr_0 [18] ;
long long int arr_1 [18] ;
int arr_4 [18] [18] [18] ;
short arr_5 [18] [18] [18] [18] ;
unsigned long long int arr_6 [18] [18] [18] [18] ;
unsigned char arr_8 [23] ;
_Bool arr_9 [23] ;
_Bool arr_10 [23] ;
long long int arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 2950933837U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -7740111056474268592LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -2105621688 : -592836582;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)21732 : (short)-2595;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 266447479636592158ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = -4285349447582149921LL;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
