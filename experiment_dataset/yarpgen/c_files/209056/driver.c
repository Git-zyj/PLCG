#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)89;
signed char var_3 = (signed char)119;
signed char var_8 = (signed char)67;
unsigned long long int var_9 = 10132299342128218721ULL;
int zero = 0;
signed char var_16 = (signed char)-59;
unsigned char var_17 = (unsigned char)140;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)211;
signed char var_20 = (signed char)99;
unsigned short arr_7 [13] ;
signed char arr_5 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned short)33279;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-4 : (signed char)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
