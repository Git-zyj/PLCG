#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6406176051684405711LL;
long long int var_4 = -288271043702198813LL;
long long int var_6 = -5544383079864493027LL;
unsigned short var_8 = (unsigned short)46637;
unsigned long long int var_10 = 12679507701399874565ULL;
signed char var_11 = (signed char)-13;
long long int var_13 = 4169630435343534377LL;
short var_16 = (short)-10117;
int zero = 0;
int var_19 = 756725265;
long long int var_20 = 6546670515492743560LL;
_Bool var_21 = (_Bool)0;
int var_22 = -1399038827;
unsigned int var_23 = 1251222244U;
unsigned long long int var_24 = 16002905283707924208ULL;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)-111;
signed char var_27 = (signed char)-75;
_Bool var_28 = (_Bool)0;
long long int var_29 = 907528649318353526LL;
unsigned char arr_0 [18] ;
_Bool arr_1 [18] [18] ;
int arr_3 [12] [12] ;
long long int arr_7 [12] [12] [12] ;
unsigned char arr_8 [12] [12] [12] ;
unsigned int arr_9 [12] ;
unsigned int arr_10 [12] ;
long long int arr_11 [12] ;
unsigned char arr_14 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 1097878013;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -6970130863910326407LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 2080678202U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 3968426281U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = -4840396859209339485LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = (unsigned char)118;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
