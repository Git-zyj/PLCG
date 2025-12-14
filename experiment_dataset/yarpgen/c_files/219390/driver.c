#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)120;
unsigned int var_1 = 1157547505U;
_Bool var_2 = (_Bool)0;
long long int var_3 = 3522604154116913886LL;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)39979;
long long int var_7 = 5814508818849381564LL;
long long int var_9 = -3675891597328905789LL;
unsigned long long int var_10 = 56122115379542247ULL;
int zero = 0;
signed char var_11 = (signed char)114;
unsigned short var_12 = (unsigned short)15034;
unsigned char var_13 = (unsigned char)25;
unsigned long long int arr_0 [12] ;
long long int arr_1 [12] ;
unsigned short arr_2 [12] [12] ;
long long int arr_3 [12] ;
_Bool arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 17383710579371510555ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 797511596695090828LL : -1311690364515025070LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)63389 : (unsigned short)23687;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 925264546149661383LL : 6401629353268263121LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
