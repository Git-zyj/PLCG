#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1246628684;
short var_2 = (short)27437;
long long int var_10 = -2187135620551532979LL;
unsigned short var_11 = (unsigned short)9681;
int var_14 = 1539358440;
signed char var_16 = (signed char)-121;
short var_19 = (short)32277;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 17068849050461398634ULL;
unsigned int var_22 = 4026470609U;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)1;
unsigned char arr_0 [10] [10] ;
unsigned short arr_1 [10] ;
long long int arr_2 [10] ;
unsigned short arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)29321;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -1114579852257461479LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)20908;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
