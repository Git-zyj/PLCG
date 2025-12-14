#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2202168275021013289LL;
unsigned short var_1 = (unsigned short)36238;
unsigned short var_3 = (unsigned short)36503;
unsigned char var_5 = (unsigned char)252;
unsigned long long int var_6 = 8453200205563452319ULL;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)15;
_Bool var_11 = (_Bool)0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-115;
int zero = 0;
signed char var_17 = (signed char)22;
long long int var_18 = 496559886676077230LL;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)38058;
signed char var_21 = (signed char)-50;
signed char arr_6 [22] [22] ;
short arr_7 [22] [22] [22] ;
long long int arr_2 [22] [22] ;
signed char arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)17;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)21465;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 6590648218080512791LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (signed char)38;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
