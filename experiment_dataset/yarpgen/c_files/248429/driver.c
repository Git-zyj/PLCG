#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4769035308794201449LL;
int var_1 = 1703297247;
_Bool var_2 = (_Bool)0;
long long int var_5 = 1713846122745714522LL;
_Bool var_8 = (_Bool)1;
long long int var_11 = 4060787513914387202LL;
signed char var_15 = (signed char)-121;
int zero = 0;
unsigned int var_18 = 142452730U;
long long int var_19 = -3410724792971417036LL;
signed char var_20 = (signed char)76;
long long int var_21 = 4837893162844699776LL;
signed char var_22 = (signed char)-92;
int var_23 = 59051586;
_Bool var_24 = (_Bool)0;
unsigned int arr_2 [23] [23] ;
long long int arr_3 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 3165508666U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 6758877845890684128LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
