#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)48460;
short var_5 = (short)4322;
int var_7 = -102012216;
long long int var_10 = -1779158785192190599LL;
long long int var_12 = -8042386483518574426LL;
long long int var_13 = 2890829262146364928LL;
int zero = 0;
long long int var_18 = -8428543809005682113LL;
int var_19 = 708983591;
long long int var_20 = 1144139025560666389LL;
long long int var_21 = -2934102814653492686LL;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)56995;
unsigned long long int var_24 = 6915627199759246214ULL;
int var_25 = -1178132538;
long long int arr_0 [22] ;
signed char arr_4 [22] ;
_Bool arr_5 [22] ;
unsigned int arr_7 [22] [22] ;
unsigned short arr_2 [22] ;
unsigned char arr_3 [22] ;
long long int arr_8 [22] ;
unsigned char arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 7883537613372513972LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = 3277283589U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)33476;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = -132130031836340300LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (unsigned char)226;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
