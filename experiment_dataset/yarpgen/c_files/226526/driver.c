#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7225;
long long int var_1 = 6788804121556821407LL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 12439285775483810251ULL;
unsigned long long int var_5 = 3210956977388681655ULL;
unsigned int var_7 = 1453838080U;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_11 = -5742310721956736842LL;
unsigned int var_12 = 3546830642U;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 8671175901308597912ULL;
signed char var_15 = (signed char)-16;
unsigned long long int var_16 = 3528211110002897944ULL;
long long int arr_0 [24] ;
signed char arr_2 [24] ;
unsigned long long int arr_4 [11] ;
short arr_5 [11] [11] ;
int arr_3 [24] [24] ;
short arr_6 [11] ;
unsigned long long int arr_7 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -8010392933289867487LL : 4873865508501092539LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 3749132301049076690ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-6716;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 993423541 : 659703844;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (short)-6172;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = 2423133430097660569ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
