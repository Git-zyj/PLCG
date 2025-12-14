#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25835;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)170;
long long int var_8 = 7949491309853793753LL;
unsigned long long int var_10 = 677477818603916607ULL;
int var_11 = 519580490;
int var_14 = 1755955179;
long long int var_15 = 6233741363267595509LL;
unsigned char var_16 = (unsigned char)183;
int var_17 = -725137139;
int zero = 0;
unsigned short var_19 = (unsigned short)20873;
short var_20 = (short)28327;
short var_21 = (short)14973;
signed char var_22 = (signed char)41;
signed char arr_2 [18] [18] ;
unsigned int arr_5 [18] [18] ;
int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 3670509653U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = -484175251;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
