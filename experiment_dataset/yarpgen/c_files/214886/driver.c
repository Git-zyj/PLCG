#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1570086510;
unsigned long long int var_2 = 12055633923583551280ULL;
unsigned long long int var_3 = 10165965282273446506ULL;
unsigned short var_4 = (unsigned short)29613;
unsigned short var_5 = (unsigned short)20605;
int var_6 = 1172513005;
int var_7 = -1432488302;
int var_8 = -1458223887;
int var_9 = 259876807;
int var_10 = 1787681100;
unsigned short var_11 = (unsigned short)4115;
unsigned short var_12 = (unsigned short)21202;
int zero = 0;
int var_13 = 1227908325;
unsigned short var_14 = (unsigned short)23331;
unsigned short var_15 = (unsigned short)22887;
int var_16 = -551040472;
int var_17 = 1450985763;
int var_18 = 810646894;
int var_19 = 1664437445;
unsigned short var_20 = (unsigned short)35191;
unsigned long long int var_21 = 5520427447415537422ULL;
int arr_0 [14] ;
unsigned short arr_1 [14] [14] ;
int arr_3 [14] [14] ;
unsigned short arr_4 [14] [14] [14] ;
unsigned short arr_5 [10] ;
int arr_6 [10] [10] ;
unsigned short arr_2 [14] [14] ;
int arr_7 [10] [10] ;
int arr_8 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 522379701;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)35738;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = -168610276;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)28983;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)5131;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 80933831;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)33291;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = 395914837;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = 1358111785;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
