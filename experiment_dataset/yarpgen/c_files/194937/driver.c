#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2141269123;
int var_1 = 1720099715;
_Bool var_2 = (_Bool)0;
long long int var_3 = 6030850341249019055LL;
unsigned char var_4 = (unsigned char)102;
unsigned short var_5 = (unsigned short)13127;
int var_6 = 106948121;
unsigned int var_8 = 1154585977U;
short var_9 = (short)-17577;
int zero = 0;
unsigned int var_10 = 953212988U;
unsigned int var_11 = 2148527332U;
unsigned int var_12 = 2702283282U;
unsigned int var_13 = 3269246931U;
unsigned char var_14 = (unsigned char)12;
signed char arr_0 [23] ;
long long int arr_2 [23] ;
long long int arr_4 [23] ;
short arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 3399947288544516429LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -4160867157131054482LL : -8949168970803124390LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)19993 : (short)-212;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
