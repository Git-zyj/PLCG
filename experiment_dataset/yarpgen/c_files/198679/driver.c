#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3117339372U;
unsigned long long int var_1 = 9138167963403781417ULL;
unsigned short var_2 = (unsigned short)29470;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-26908;
signed char var_6 = (signed char)-52;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
long long int var_9 = -970420384758582725LL;
unsigned short var_10 = (unsigned short)61363;
int zero = 0;
unsigned long long int var_11 = 9754504312176661838ULL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)68;
unsigned long long int var_15 = 238136236424626617ULL;
signed char arr_13 [23] [23] [23] [23] ;
_Bool arr_14 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-19 : (signed char)74;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
