#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7560576027009287493LL;
long long int var_2 = 8392280821881102076LL;
long long int var_3 = -3791228546659890071LL;
long long int var_4 = -7088770731877057017LL;
long long int var_5 = -6385438111864102027LL;
long long int var_6 = 5890044140520171223LL;
long long int var_7 = 4792374966876559380LL;
long long int var_8 = -4523379201523481962LL;
long long int var_9 = 4282469867217143926LL;
long long int var_12 = 7406106985200927565LL;
int zero = 0;
long long int var_13 = 6774389774540655122LL;
long long int var_14 = -3144188787937873747LL;
long long int var_15 = 8268470566830911730LL;
long long int var_16 = -1567687094684910644LL;
long long int var_17 = -6554541295593462699LL;
long long int var_18 = 1655006909098640358LL;
long long int var_19 = -5035990203221857055LL;
long long int arr_0 [25] ;
long long int arr_1 [25] ;
long long int arr_4 [16] ;
long long int arr_5 [16] [16] ;
long long int arr_9 [19] [19] ;
long long int arr_13 [12] ;
long long int arr_2 [25] [25] ;
long long int arr_3 [25] [25] ;
long long int arr_6 [16] ;
long long int arr_7 [16] ;
long long int arr_11 [19] ;
long long int arr_16 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -7403921220028133329LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -7416203683081705763LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -6224898219093146210LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = -4653457768081562553LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = -4360414946517586238LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = -8700684805704011314LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 8526364658116872987LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 6476373629583263898LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 5552697536704527713LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = -7714367118302069778LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = -995629686374876398LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = 7455646092138081974LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
