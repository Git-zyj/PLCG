#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 422792113U;
int var_2 = 1280882635;
long long int var_4 = -7075126025047120688LL;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)47;
unsigned long long int var_8 = 3729024807560581501ULL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)252;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-7;
unsigned int var_14 = 1387093964U;
long long int var_15 = -8777516329224425042LL;
signed char var_16 = (signed char)-56;
unsigned short var_17 = (unsigned short)14982;
unsigned char var_18 = (unsigned char)40;
short var_19 = (short)12733;
short var_20 = (short)-21809;
unsigned short arr_1 [23] ;
unsigned int arr_3 [23] ;
unsigned int arr_4 [23] [23] ;
signed char arr_5 [23] [23] [23] ;
long long int arr_6 [23] ;
unsigned char arr_19 [10] [10] [10] ;
unsigned int arr_20 [10] [10] [10] [10] ;
unsigned long long int arr_7 [23] ;
short arr_10 [23] ;
signed char arr_23 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)7187;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 2952760709U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 10012940U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = -4421218181494649255LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 30781536U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 12719783723043218861ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (short)-3392;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = (signed char)1;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
