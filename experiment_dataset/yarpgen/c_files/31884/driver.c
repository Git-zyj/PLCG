#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1039034794U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 16355526685946643087ULL;
long long int var_7 = 7854010779347349010LL;
short var_8 = (short)-19464;
int var_11 = 1493464998;
unsigned int var_12 = 1001830509U;
unsigned short var_13 = (unsigned short)18602;
_Bool var_14 = (_Bool)0;
long long int var_15 = 886770309974061147LL;
int zero = 0;
unsigned int var_17 = 4250105229U;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 9762038893971354613ULL;
unsigned int var_20 = 450495192U;
unsigned long long int arr_6 [15] [15] [15] ;
short arr_7 [15] [15] [15] ;
int arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 11094322339604225559ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-21934;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 224249818 : 1710510153;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
