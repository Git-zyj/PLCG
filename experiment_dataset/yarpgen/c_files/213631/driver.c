#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4666649682291213294ULL;
unsigned long long int var_5 = 7907819057042581452ULL;
unsigned int var_6 = 3624206228U;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 2283157966408006377ULL;
unsigned short var_10 = (unsigned short)54130;
unsigned long long int var_11 = 13095482377229746676ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 616289647209701946ULL;
unsigned long long int var_15 = 5493795360256166817ULL;
unsigned short var_16 = (unsigned short)48651;
short var_17 = (short)1239;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
unsigned int arr_0 [21] ;
_Bool arr_1 [21] [21] ;
unsigned int arr_2 [21] [21] [21] ;
unsigned long long int arr_3 [21] ;
_Bool arr_4 [21] ;
unsigned long long int arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 2092428399U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 3225186918U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 8670566842148959939ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 323363675868699682ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
