#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -536551523;
long long int var_3 = 7848339442051699619LL;
long long int var_4 = -1733588188286241929LL;
unsigned long long int var_5 = 13113995208172427628ULL;
int var_7 = 1303375392;
short var_9 = (short)10629;
_Bool var_12 = (_Bool)0;
unsigned short var_15 = (unsigned short)2145;
unsigned long long int var_16 = 12532165935162029666ULL;
_Bool var_19 = (_Bool)1;
int zero = 0;
long long int var_20 = -1003281594190701503LL;
long long int var_21 = -1618199143982899479LL;
_Bool var_22 = (_Bool)1;
int var_23 = -525933010;
signed char arr_1 [15] [15] ;
unsigned long long int arr_2 [15] ;
_Bool arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-112 : (signed char)-39;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 13719177503471470845ULL : 4616936860072880170ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
