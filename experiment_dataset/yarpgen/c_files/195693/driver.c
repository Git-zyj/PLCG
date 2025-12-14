#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7164995415596133574LL;
unsigned long long int var_1 = 8009872170075472828ULL;
signed char var_5 = (signed char)-18;
unsigned int var_6 = 1361567075U;
unsigned int var_7 = 2265235960U;
int var_9 = -458816827;
int zero = 0;
unsigned char var_10 = (unsigned char)197;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 5804103881110401908ULL;
unsigned long long int var_13 = 2056621411780149873ULL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)30597;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 16659943884424326562ULL;
unsigned long long int var_18 = 17650264476062108944ULL;
unsigned short var_19 = (unsigned short)61053;
_Bool var_20 = (_Bool)1;
unsigned int arr_0 [18] ;
unsigned int arr_1 [18] ;
signed char arr_2 [18] ;
unsigned long long int arr_5 [14] [14] [14] ;
int arr_9 [14] [14] [14] ;
long long int arr_10 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 3654927115U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 338526247U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1047636027288207460ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -1613893291;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = -6115128800228905557LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
