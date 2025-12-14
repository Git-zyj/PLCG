#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 532826028;
unsigned long long int var_5 = 12085448025140114105ULL;
short var_6 = (short)29294;
unsigned char var_8 = (unsigned char)49;
short var_11 = (short)27168;
unsigned short var_13 = (unsigned short)45794;
short var_14 = (short)17359;
long long int var_15 = 2888932661197653769LL;
unsigned char var_16 = (unsigned char)171;
int zero = 0;
long long int var_17 = 6637640290498862839LL;
signed char var_18 = (signed char)31;
long long int var_19 = -8514475922829539877LL;
long long int var_20 = -5161382051033167889LL;
short var_21 = (short)-28939;
unsigned short var_22 = (unsigned short)36149;
unsigned short var_23 = (unsigned short)60382;
signed char var_24 = (signed char)7;
_Bool var_25 = (_Bool)0;
int var_26 = 565240160;
unsigned int var_27 = 3087243226U;
long long int var_28 = 9165629981146028681LL;
short var_29 = (short)-23528;
long long int arr_4 [18] [18] ;
short arr_5 [18] ;
long long int arr_9 [18] [18] [18] ;
unsigned char arr_10 [18] [18] [18] ;
int arr_18 [18] ;
int arr_17 [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 1992568055137212750LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (short)18137;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 6420103398306192723LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = -1642705483;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 201691832 : 1070291427;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
