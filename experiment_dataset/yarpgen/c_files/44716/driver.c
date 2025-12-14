#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 747632725U;
unsigned int var_5 = 3310184508U;
signed char var_6 = (signed char)-89;
unsigned short var_9 = (unsigned short)64209;
int zero = 0;
int var_11 = -693817611;
unsigned int var_12 = 2069545298U;
unsigned long long int var_13 = 9666086177020535199ULL;
unsigned int var_14 = 608495567U;
unsigned int var_15 = 2617490349U;
unsigned long long int var_16 = 11034971327322915414ULL;
unsigned long long int var_17 = 7675468062717422925ULL;
unsigned long long int arr_0 [18] ;
unsigned char arr_2 [18] ;
unsigned long long int arr_3 [18] ;
long long int arr_5 [18] [18] [18] ;
unsigned long long int arr_7 [18] [18] [18] ;
unsigned int arr_9 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 106378689416111406ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)200 : (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 6965751386316410044ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 432115105194511844LL : -1666652713305307621LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 5204241263914501718ULL : 13164078346858548282ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 3767291587U : 1319128805U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
