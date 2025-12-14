#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7499651239047001868LL;
unsigned long long int var_2 = 16250473688268033939ULL;
short var_3 = (short)26446;
unsigned int var_5 = 1452704212U;
signed char var_6 = (signed char)-62;
signed char var_7 = (signed char)-40;
short var_8 = (short)3025;
unsigned int var_10 = 774565508U;
signed char var_12 = (signed char)49;
unsigned char var_15 = (unsigned char)242;
int zero = 0;
signed char var_16 = (signed char)117;
unsigned int var_17 = 1124554187U;
unsigned long long int var_18 = 3384431630827985389ULL;
unsigned int var_19 = 552710583U;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
int var_22 = 1692393975;
long long int var_23 = -5393737394017037743LL;
int var_24 = 733605963;
unsigned long long int arr_0 [19] [19] ;
_Bool arr_1 [19] ;
long long int arr_3 [19] ;
unsigned int arr_5 [24] ;
int arr_9 [24] [24] ;
unsigned long long int arr_4 [19] ;
unsigned char arr_11 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 17578011570225470950ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -2790227717770346684LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 3340350064U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = -85644691;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 17811116252900569755ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (unsigned char)133;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
