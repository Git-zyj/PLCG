#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 715473617;
short var_7 = (short)-9204;
signed char var_9 = (signed char)-106;
int zero = 0;
int var_16 = 819058252;
unsigned long long int var_17 = 14149804801768953921ULL;
unsigned long long int var_18 = 3628450661542541345ULL;
unsigned long long int var_19 = 11742765425338097903ULL;
unsigned long long int var_20 = 12204903569450729112ULL;
_Bool var_21 = (_Bool)1;
int var_22 = -1316968586;
long long int var_23 = 7678734983040586997LL;
int var_24 = 1214863982;
unsigned int var_25 = 2110352027U;
long long int arr_0 [18] [18] ;
unsigned int arr_1 [18] ;
signed char arr_3 [18] [18] [18] ;
int arr_4 [18] ;
_Bool arr_5 [18] [18] [18] ;
long long int arr_6 [18] [18] [18] [18] ;
unsigned long long int arr_8 [12] ;
unsigned short arr_2 [18] ;
unsigned int arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 693153453700823647LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 2436431495U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 999313873;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -5922031608058006565LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 4285623697149886425ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)43209;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 405476636U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
