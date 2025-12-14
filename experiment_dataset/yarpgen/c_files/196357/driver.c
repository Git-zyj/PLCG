#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)55;
unsigned int var_2 = 1363039587U;
short var_3 = (short)-17634;
unsigned short var_4 = (unsigned short)41950;
unsigned short var_5 = (unsigned short)7038;
unsigned short var_8 = (unsigned short)41395;
unsigned short var_9 = (unsigned short)5700;
unsigned short var_10 = (unsigned short)56448;
unsigned short var_11 = (unsigned short)25591;
unsigned short var_12 = (unsigned short)38470;
int zero = 0;
unsigned char var_13 = (unsigned char)216;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)25550;
unsigned int var_16 = 2482202225U;
unsigned short arr_2 [24] ;
long long int arr_7 [13] ;
unsigned int arr_3 [24] [24] ;
int arr_4 [24] ;
unsigned int arr_10 [13] ;
unsigned int arr_11 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)47204;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = -4605212290696446022LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 4111046019U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -549191332;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 3616816310U : 324694593U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2417263736U : 4070610391U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
