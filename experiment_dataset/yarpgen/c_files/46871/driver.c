#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1490535924;
unsigned short var_1 = (unsigned short)37508;
unsigned char var_3 = (unsigned char)231;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)17838;
unsigned long long int var_6 = 13566428316122252031ULL;
unsigned char var_7 = (unsigned char)109;
int zero = 0;
unsigned int var_10 = 4190509625U;
unsigned long long int var_11 = 6294658460242734618ULL;
short var_12 = (short)5412;
short arr_0 [18] ;
unsigned long long int arr_1 [18] ;
_Bool arr_2 [18] ;
unsigned char arr_4 [18] [18] [18] [18] ;
short arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-21945 : (short)-8202;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 8961833077063069109ULL : 17345271434991784611ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-11813 : (short)14695;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
