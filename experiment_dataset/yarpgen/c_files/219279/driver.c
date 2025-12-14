#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 1815260512;
long long int var_3 = 967527342415464404LL;
unsigned char var_4 = (unsigned char)214;
unsigned int var_5 = 1950600349U;
unsigned char var_6 = (unsigned char)179;
signed char var_8 = (signed char)61;
unsigned int var_9 = 2549240537U;
_Bool var_10 = (_Bool)0;
int var_11 = -1922401091;
int var_12 = 68300497;
int zero = 0;
signed char var_13 = (signed char)5;
_Bool var_14 = (_Bool)1;
long long int var_15 = -6121554087566024157LL;
unsigned int var_16 = 1041256170U;
signed char var_17 = (signed char)-96;
_Bool var_18 = (_Bool)1;
_Bool arr_0 [25] ;
unsigned char arr_7 [25] [25] ;
_Bool arr_8 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
