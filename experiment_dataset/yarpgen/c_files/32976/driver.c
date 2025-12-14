#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9517;
short var_2 = (short)-2476;
_Bool var_5 = (_Bool)1;
unsigned short var_9 = (unsigned short)58230;
unsigned long long int var_10 = 10944157677636171756ULL;
signed char var_11 = (signed char)121;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)152;
unsigned char var_16 = (unsigned char)9;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-93;
unsigned short var_19 = (unsigned short)29631;
signed char var_20 = (signed char)41;
unsigned short var_21 = (unsigned short)36342;
unsigned long long int var_22 = 10601675884061252351ULL;
_Bool arr_0 [21] [21] ;
unsigned char arr_2 [21] [21] [21] ;
short arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-38;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
