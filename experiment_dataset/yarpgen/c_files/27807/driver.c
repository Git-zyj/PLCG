#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-103;
int var_3 = 1515149459;
unsigned short var_4 = (unsigned short)40258;
long long int var_8 = 2347105665483398484LL;
long long int var_11 = -8658080002413011194LL;
int zero = 0;
unsigned long long int var_12 = 1926740753272928004ULL;
_Bool var_13 = (_Bool)0;
int var_14 = 598339557;
unsigned int var_15 = 2374633601U;
signed char var_16 = (signed char)-82;
unsigned int var_17 = 2917548854U;
unsigned short var_18 = (unsigned short)25671;
unsigned char var_19 = (unsigned char)17;
signed char arr_0 [23] ;
unsigned int arr_1 [23] ;
unsigned long long int arr_3 [23] ;
int arr_7 [23] ;
unsigned short arr_10 [23] [23] [23] [23] ;
unsigned short arr_11 [23] [23] [23] [23] [23] ;
signed char arr_14 [23] [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-60 : (signed char)32;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2405527475U : 1182375266U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 7966659725630888362ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 379459904;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)24963;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)40620;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (signed char)8 : (signed char)40;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
