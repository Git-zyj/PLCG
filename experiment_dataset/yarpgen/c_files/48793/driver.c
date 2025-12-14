#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1138289905694525090LL;
unsigned char var_4 = (unsigned char)223;
_Bool var_5 = (_Bool)1;
signed char var_9 = (signed char)-83;
int var_10 = 1305938967;
int var_11 = -1007298198;
int zero = 0;
signed char var_12 = (signed char)112;
unsigned int var_13 = 3691851590U;
long long int var_14 = -2145336303737427459LL;
long long int var_15 = -5884311056187641094LL;
short arr_4 [19] ;
short arr_6 [19] [19] ;
unsigned int arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (short)-26441;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-13549;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 2651286212U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
