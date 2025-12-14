#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5233466344916341427LL;
unsigned int var_3 = 4138498848U;
unsigned int var_5 = 66765837U;
_Bool var_8 = (_Bool)0;
int var_14 = 1055456115;
int zero = 0;
long long int var_20 = 3954754709974020833LL;
long long int var_21 = 1730092163618152252LL;
signed char var_22 = (signed char)58;
unsigned long long int var_23 = 3028415024370827565ULL;
int var_24 = 1797569755;
unsigned long long int var_25 = 11816523558711159970ULL;
unsigned int var_26 = 3142453224U;
short var_27 = (short)-14936;
signed char arr_1 [17] ;
short arr_4 [17] ;
unsigned long long int arr_7 [17] [17] [17] [17] ;
short arr_8 [17] ;
_Bool arr_10 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)8245;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 8037184770739102505ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (short)21073;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
