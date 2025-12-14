#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-31163;
unsigned char var_4 = (unsigned char)90;
unsigned short var_6 = (unsigned short)5398;
int var_7 = -1465783260;
unsigned int var_8 = 913260500U;
long long int var_10 = -649732699777492816LL;
short var_14 = (short)-18819;
unsigned long long int var_15 = 17217605938289513321ULL;
int zero = 0;
long long int var_18 = -2741649817318740079LL;
unsigned char var_19 = (unsigned char)172;
unsigned short var_20 = (unsigned short)35059;
long long int var_21 = -4941074568692324121LL;
long long int arr_0 [15] [15] ;
long long int arr_1 [15] ;
unsigned int arr_2 [15] ;
unsigned long long int arr_3 [15] ;
unsigned char arr_4 [15] [15] ;
signed char arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = -5700460877312077097LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -310931710735810179LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 1467213775U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 13456192822030145920ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)122;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
