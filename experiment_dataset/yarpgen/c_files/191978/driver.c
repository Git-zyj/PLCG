#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12363061919610168714ULL;
unsigned long long int var_6 = 7621039708900130441ULL;
unsigned int var_9 = 2480224379U;
unsigned int var_12 = 949531773U;
unsigned long long int var_14 = 15455146106867557203ULL;
long long int var_19 = 1793180665852703052LL;
int zero = 0;
long long int var_20 = 7927736468849793251LL;
_Bool var_21 = (_Bool)0;
long long int var_22 = 6999540953666827315LL;
long long int var_23 = -5726931700732644030LL;
unsigned long long int var_24 = 5716806573326828010ULL;
unsigned int var_25 = 2916593469U;
signed char var_26 = (signed char)-91;
long long int var_27 = -4166827243808294355LL;
long long int var_28 = -5363107329328398225LL;
_Bool arr_2 [13] ;
unsigned int arr_4 [13] [13] ;
_Bool arr_8 [13] [13] [13] [13] ;
unsigned int arr_12 [13] [13] [13] [13] [13] ;
long long int arr_13 [16] [16] ;
unsigned long long int arr_14 [16] ;
long long int arr_15 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 1495487961U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 3926158187U : 2255968979U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = 182586824855349081LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = 5554801934876272372ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = -5640713047199722501LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
