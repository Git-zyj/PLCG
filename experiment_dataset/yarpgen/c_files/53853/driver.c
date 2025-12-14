#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1864719975U;
short var_1 = (short)-13479;
short var_3 = (short)21879;
int var_4 = -2105686173;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
short var_9 = (short)23619;
int var_10 = 49912750;
int zero = 0;
int var_12 = -916505290;
signed char var_13 = (signed char)-103;
int var_14 = 37461160;
unsigned short var_15 = (unsigned short)13223;
_Bool var_16 = (_Bool)1;
int var_17 = -1870704846;
unsigned int var_18 = 1490144310U;
unsigned int arr_0 [11] ;
unsigned long long int arr_1 [11] [11] ;
unsigned long long int arr_2 [11] ;
int arr_4 [15] ;
unsigned int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 685295562U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 7088393773814282294ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 6380276737452506787ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -852408899;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 1404955530U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
