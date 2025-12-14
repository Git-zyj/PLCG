#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 319997729640463837ULL;
unsigned long long int var_2 = 6465845517831815359ULL;
unsigned long long int var_4 = 11365280088676609862ULL;
unsigned long long int var_5 = 5962299037426457937ULL;
unsigned long long int var_10 = 3521336288987362205ULL;
unsigned long long int var_14 = 4471953901945471468ULL;
unsigned long long int var_16 = 4839655676684544804ULL;
int zero = 0;
unsigned long long int var_20 = 13240055023127375961ULL;
unsigned long long int var_21 = 3581140888414379574ULL;
unsigned long long int var_22 = 8859670210241743817ULL;
unsigned long long int arr_1 [16] ;
unsigned long long int arr_2 [16] ;
unsigned long long int arr_3 [16] ;
unsigned long long int arr_4 [16] [16] ;
unsigned long long int arr_5 [16] [16] [16] ;
unsigned long long int arr_6 [16] [16] [16] ;
unsigned long long int arr_7 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 15237034133571291714ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 14137402785312030621ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 5022277961652850529ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 685425763635083728ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 9146329952651397089ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 16050737270441346984ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = 18359111788473016933ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
