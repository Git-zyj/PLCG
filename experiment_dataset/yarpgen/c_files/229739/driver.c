#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)50;
_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)125;
long long int var_5 = 5898974801616683910LL;
long long int var_6 = 1839636652341513035LL;
short var_7 = (short)15478;
_Bool var_8 = (_Bool)0;
long long int var_9 = -9025769828765317947LL;
short var_10 = (short)10020;
int zero = 0;
unsigned short var_11 = (unsigned short)45467;
unsigned char var_12 = (unsigned char)70;
unsigned char var_13 = (unsigned char)64;
short arr_2 [21] ;
short arr_3 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)4398;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-12323;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
