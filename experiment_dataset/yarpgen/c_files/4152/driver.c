#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2117042204755040570ULL;
unsigned long long int var_1 = 1613893698907509224ULL;
long long int var_3 = 4182885156900415517LL;
unsigned long long int var_5 = 1699835619251436474ULL;
short var_6 = (short)720;
short var_7 = (short)-13826;
long long int var_10 = 3962737773285895576LL;
unsigned long long int var_14 = 5244070810913345220ULL;
unsigned long long int var_16 = 12880134412124264959ULL;
int zero = 0;
unsigned long long int var_18 = 571977292861087824ULL;
unsigned long long int var_19 = 11634618610281843141ULL;
unsigned long long int var_20 = 12091809527216719369ULL;
unsigned long long int var_21 = 12052809337111921389ULL;
unsigned long long int var_22 = 904379081633887256ULL;
unsigned long long int var_23 = 8939108203234486592ULL;
short var_24 = (short)30295;
unsigned long long int var_25 = 16726953389956192594ULL;
unsigned long long int var_26 = 8040213302617745565ULL;
long long int var_27 = 8432888622314433659LL;
long long int var_28 = -9213652253551500830LL;
unsigned long long int var_29 = 17334866640393862607ULL;
short var_30 = (short)12555;
unsigned long long int arr_3 [15] ;
unsigned long long int arr_15 [11] [11] [11] ;
short arr_17 [11] ;
unsigned long long int arr_23 [11] [11] [11] [11] ;
short arr_28 [16] [16] ;
short arr_9 [15] ;
short arr_13 [11] ;
unsigned long long int arr_25 [11] [11] [11] [11] [11] ;
short arr_26 [11] [11] [11] [11] ;
long long int arr_29 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 10249613163723340557ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 16568908280048096173ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = (short)27118;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 2144800566749511147ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_28 [i_0] [i_1] = (short)-15385;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (short)10950;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (short)25740;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 17907671750944477408ULL : 5758554552968370948ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)5736 : (short)16109;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_29 [i_0] = -97537913703632840LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
