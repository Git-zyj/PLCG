#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)39;
unsigned short var_4 = (unsigned short)61416;
unsigned char var_5 = (unsigned char)175;
unsigned long long int var_9 = 1990510422318787784ULL;
short var_10 = (short)3757;
unsigned long long int var_12 = 16481593164307865471ULL;
unsigned int var_15 = 2368918931U;
int zero = 0;
unsigned long long int var_16 = 6649478090261178899ULL;
unsigned long long int var_17 = 5042520859114747782ULL;
unsigned char var_18 = (unsigned char)228;
unsigned int var_19 = 3112511222U;
unsigned char var_20 = (unsigned char)53;
unsigned char var_21 = (unsigned char)171;
unsigned short var_22 = (unsigned short)42197;
unsigned int var_23 = 3644104361U;
unsigned char var_24 = (unsigned char)27;
unsigned char var_25 = (unsigned char)231;
unsigned char var_26 = (unsigned char)12;
int var_27 = -1527774941;
unsigned char var_28 = (unsigned char)253;
unsigned long long int var_29 = 7520023121063184204ULL;
_Bool var_30 = (_Bool)1;
unsigned char arr_9 [23] [23] [23] ;
short arr_15 [23] [23] [23] [23] ;
unsigned int arr_41 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (short)29786;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_41 [i_0] = 2972556723U;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_41 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
