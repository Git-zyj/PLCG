#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4338050055980111543ULL;
long long int var_5 = -3695738384312072277LL;
unsigned long long int var_6 = 10924441736900916257ULL;
signed char var_8 = (signed char)48;
signed char var_11 = (signed char)-54;
signed char var_17 = (signed char)54;
unsigned short var_18 = (unsigned short)4389;
int zero = 0;
unsigned long long int var_19 = 3636795299497679216ULL;
unsigned long long int var_20 = 18041130028962018141ULL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)64901;
unsigned long long int var_23 = 3206291220424053640ULL;
unsigned short var_24 = (unsigned short)17790;
unsigned char var_25 = (unsigned char)194;
unsigned char arr_0 [13] ;
long long int arr_3 [13] ;
_Bool arr_8 [13] [13] [13] [13] ;
unsigned long long int arr_10 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -8407118403415058787LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 16335920858542498289ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
