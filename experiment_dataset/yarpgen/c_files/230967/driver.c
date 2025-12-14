#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)179;
long long int var_6 = -2092210514115210224LL;
int var_12 = -1390201526;
long long int var_14 = -6136005962185603390LL;
int zero = 0;
long long int var_15 = 5255243523763752768LL;
int var_16 = -306524923;
signed char var_17 = (signed char)66;
short var_18 = (short)-1513;
_Bool var_19 = (_Bool)1;
short arr_2 [22] ;
signed char arr_8 [22] ;
unsigned char arr_9 [22] [22] [22] [22] ;
long long int arr_10 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)49;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = -2202668478387571615LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
