#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8225;
unsigned short var_1 = (unsigned short)32471;
int var_3 = -275902162;
unsigned char var_6 = (unsigned char)99;
long long int var_7 = -475925979045698764LL;
unsigned long long int var_8 = 15894803403600916880ULL;
short var_9 = (short)10760;
long long int var_10 = -8751071542179443651LL;
signed char var_11 = (signed char)80;
int zero = 0;
int var_12 = 1804119192;
signed char var_13 = (signed char)124;
unsigned short var_14 = (unsigned short)8585;
unsigned char var_15 = (unsigned char)205;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 9681834199918346946ULL;
unsigned short var_18 = (unsigned short)23618;
unsigned char arr_2 [20] [20] ;
unsigned int arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1376033154U : 36220858U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
