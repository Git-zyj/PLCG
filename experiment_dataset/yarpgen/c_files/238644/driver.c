#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)115;
unsigned char var_3 = (unsigned char)135;
signed char var_6 = (signed char)36;
short var_9 = (short)-24254;
short var_11 = (short)-27251;
int var_12 = 2084644856;
signed char var_13 = (signed char)-40;
unsigned long long int var_16 = 15078686089019836355ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)139;
int var_18 = 314887183;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)139;
long long int var_21 = 4415672724567635132LL;
unsigned short var_22 = (unsigned short)594;
unsigned char var_23 = (unsigned char)85;
unsigned char var_24 = (unsigned char)86;
unsigned char var_25 = (unsigned char)225;
unsigned int arr_1 [18] ;
_Bool arr_2 [14] ;
unsigned char arr_8 [14] [14] ;
long long int arr_9 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3671134251U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)75 : (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -1826682797671446074LL : 6928871014805497177LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
