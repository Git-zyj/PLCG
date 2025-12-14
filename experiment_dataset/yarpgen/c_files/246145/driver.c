#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 266156912U;
unsigned char var_1 = (unsigned char)189;
long long int var_2 = 900657261640776097LL;
unsigned int var_3 = 3257725875U;
long long int var_4 = -6929103922827032534LL;
unsigned int var_7 = 89180888U;
int zero = 0;
unsigned short var_10 = (unsigned short)16171;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)107;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)56278;
signed char var_15 = (signed char)-63;
signed char arr_0 [19] ;
unsigned int arr_1 [19] ;
short arr_2 [19] [19] ;
signed char arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 2778288716U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (short)20390;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)-39;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
