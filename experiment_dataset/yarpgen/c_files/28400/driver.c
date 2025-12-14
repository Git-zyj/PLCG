#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6918139775718713295ULL;
_Bool var_2 = (_Bool)0;
short var_3 = (short)12676;
unsigned short var_6 = (unsigned short)26684;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 15051137981335360437ULL;
unsigned long long int var_10 = 14714315324228801962ULL;
int var_11 = -382888344;
int zero = 0;
short var_13 = (short)11435;
int var_14 = -1656925936;
long long int var_15 = -7959295844467013433LL;
long long int var_16 = -3557088343964848528LL;
int var_17 = -1115753198;
long long int var_18 = -7128369532183818776LL;
short var_19 = (short)12809;
unsigned long long int arr_4 [19] ;
short arr_5 [19] ;
unsigned long long int arr_7 [19] ;
short arr_2 [10] ;
unsigned long long int arr_3 [10] ;
short arr_6 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 7447153771741996995ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (short)7199;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 720539638008290852ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)-29100;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 8374069092935668773ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)26252 : (short)-18818;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
