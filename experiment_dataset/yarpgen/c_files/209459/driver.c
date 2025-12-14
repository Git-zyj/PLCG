#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22628;
long long int var_2 = -3312105933554151690LL;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)121;
unsigned short var_8 = (unsigned short)29417;
unsigned long long int var_11 = 15738209848612499304ULL;
short var_12 = (short)10563;
unsigned int var_15 = 357485557U;
int zero = 0;
unsigned long long int var_16 = 5161303109799087287ULL;
unsigned char var_17 = (unsigned char)230;
unsigned int var_18 = 478923210U;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 945064365U;
unsigned short var_22 = (unsigned short)1037;
long long int var_23 = 5652660361751673175LL;
signed char var_24 = (signed char)30;
unsigned long long int var_25 = 729859884127871484ULL;
long long int arr_0 [14] ;
signed char arr_1 [14] ;
unsigned long long int arr_2 [14] [14] ;
_Bool arr_3 [14] ;
unsigned long long int arr_4 [14] [14] ;
unsigned long long int arr_5 [14] [14] [14] ;
unsigned int arr_8 [14] [14] ;
unsigned int arr_9 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -8520457985450302319LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 9710172625007880225ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 10586412318789884014ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 17024991022136712179ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 3358040178U : 538830642U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 2666783399U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
