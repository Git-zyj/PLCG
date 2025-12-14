#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3373766220U;
long long int var_4 = -4755259084137525780LL;
int var_5 = -1019471510;
int var_6 = 1543038877;
unsigned int var_7 = 1834514177U;
int var_10 = -90731787;
int var_11 = 1238746515;
int zero = 0;
unsigned int var_12 = 4179220766U;
unsigned char var_13 = (unsigned char)224;
short var_14 = (short)13611;
unsigned char var_15 = (unsigned char)58;
_Bool var_16 = (_Bool)1;
signed char arr_0 [18] [18] ;
int arr_2 [18] ;
signed char arr_3 [18] ;
_Bool arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 114654093;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
