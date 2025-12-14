#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)242;
unsigned long long int var_1 = 2800449269071963945ULL;
unsigned long long int var_2 = 6896491788726709165ULL;
unsigned long long int var_3 = 1197531260635537305ULL;
unsigned long long int var_4 = 14871084316738416024ULL;
unsigned long long int var_5 = 17594682551573859451ULL;
int var_6 = 497482764;
unsigned long long int var_7 = 13287501781411823485ULL;
int var_9 = 2138260004;
unsigned long long int var_10 = 280867973626431446ULL;
int zero = 0;
long long int var_11 = -5154896126514194356LL;
long long int var_12 = 510503717580171821LL;
long long int var_13 = -3962782323986059296LL;
unsigned long long int var_14 = 5433640302225015953ULL;
long long int var_15 = -7166562769706169801LL;
unsigned long long int var_16 = 4036256117391940974ULL;
long long int var_17 = 4975516617670117006LL;
unsigned char arr_0 [19] ;
unsigned char arr_1 [19] [19] ;
unsigned char arr_2 [19] [19] ;
_Bool arr_3 [19] [19] [19] ;
int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 313441245;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
