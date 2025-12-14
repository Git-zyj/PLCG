#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1761860595;
long long int var_4 = 4395881878289953828LL;
short var_9 = (short)27305;
int zero = 0;
unsigned long long int var_10 = 17865587128966248200ULL;
int var_11 = -1731782353;
_Bool var_12 = (_Bool)0;
long long int var_13 = 3132175438414232109LL;
unsigned long long int var_14 = 17007320433581202626ULL;
signed char var_15 = (signed char)31;
signed char var_16 = (signed char)43;
short arr_0 [23] [23] ;
long long int arr_1 [23] ;
long long int arr_5 [23] [23] [23] ;
unsigned char arr_8 [23] ;
signed char arr_11 [23] ;
signed char arr_13 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-9263 : (short)16847;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -7683448924354822840LL : -6079153552502514186LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1638027832346296136LL : -143017194483474232LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)-76 : (signed char)116;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)79 : (signed char)-28;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
