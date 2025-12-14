#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5900904026666929561ULL;
int var_2 = -953100061;
unsigned short var_3 = (unsigned short)43708;
short var_4 = (short)24832;
unsigned short var_6 = (unsigned short)43774;
unsigned long long int var_8 = 1404962729934359588ULL;
int var_10 = -1578669525;
int zero = 0;
unsigned char var_11 = (unsigned char)40;
unsigned short var_12 = (unsigned short)14955;
long long int var_13 = 7809031732313986202LL;
unsigned long long int var_14 = 7150701758164536559ULL;
unsigned short var_15 = (unsigned short)10492;
int var_16 = 2049783230;
unsigned short var_17 = (unsigned short)27368;
signed char arr_0 [12] ;
unsigned short arr_2 [12] ;
unsigned long long int arr_3 [12] ;
unsigned short arr_8 [10] ;
unsigned long long int arr_15 [10] [10] [10] [10] ;
unsigned short arr_4 [12] [12] ;
int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)99 : (signed char)70;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)25346;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 14589772169976961400ULL : 13188270877156239458ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (unsigned short)30702;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 1220387314159560492ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)39352 : (unsigned short)57922;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1912551179 : 1764247245;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
