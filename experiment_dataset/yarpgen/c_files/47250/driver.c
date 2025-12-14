#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8962096575587718281LL;
unsigned int var_3 = 1517949300U;
short var_5 = (short)-1505;
unsigned int var_7 = 3372670480U;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)23272;
int zero = 0;
unsigned long long int var_15 = 15583790808253785770ULL;
int var_16 = -242301421;
unsigned short var_17 = (unsigned short)40660;
signed char var_18 = (signed char)-27;
unsigned short arr_2 [22] [22] ;
int arr_6 [15] ;
unsigned char arr_7 [15] ;
short arr_3 [22] ;
long long int arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)38199;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 1602611166;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)10164;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 6822532870357126296LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
