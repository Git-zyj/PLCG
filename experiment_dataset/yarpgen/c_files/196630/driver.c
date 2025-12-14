#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10672173249793177336ULL;
unsigned char var_5 = (unsigned char)183;
unsigned long long int var_7 = 10392651729343921575ULL;
unsigned int var_9 = 4045934308U;
long long int var_10 = -3723490542739029383LL;
unsigned char var_11 = (unsigned char)248;
int var_12 = 654578420;
unsigned int var_13 = 2592331925U;
unsigned char var_14 = (unsigned char)240;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 2327173652U;
signed char var_20 = (signed char)127;
unsigned char var_21 = (unsigned char)229;
unsigned long long int var_22 = 6560194449470955952ULL;
unsigned int var_23 = 1378548136U;
unsigned int arr_1 [14] ;
short arr_3 [14] ;
short arr_8 [14] [14] ;
unsigned char arr_12 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 232106817U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)12590 : (short)-22304;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (short)12259;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)215 : (unsigned char)183;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
