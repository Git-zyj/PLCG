#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)223;
long long int var_6 = -886455647889999313LL;
signed char var_9 = (signed char)-2;
unsigned int var_11 = 4088107724U;
int var_13 = -1288748118;
unsigned long long int var_14 = 2856465754287413636ULL;
int zero = 0;
int var_19 = 1514343351;
unsigned long long int var_20 = 7857194087581556358ULL;
_Bool var_21 = (_Bool)1;
long long int var_22 = 8849042770925719239LL;
unsigned char var_23 = (unsigned char)30;
unsigned long long int var_24 = 12228293389279173123ULL;
unsigned long long int arr_1 [15] [15] ;
unsigned char arr_3 [15] [15] [15] ;
unsigned long long int arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 5118928466126476379ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1512921361638830186ULL : 14288576764798740977ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
