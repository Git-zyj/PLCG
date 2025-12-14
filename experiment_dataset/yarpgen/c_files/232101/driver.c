#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-8381;
long long int var_2 = -6812512988244361029LL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 12252616289836409819ULL;
unsigned long long int var_6 = 4333706071194513218ULL;
_Bool var_7 = (_Bool)1;
long long int var_9 = 7675628742933558295LL;
int var_10 = -1541698435;
unsigned long long int var_13 = 15629870355585040160ULL;
unsigned long long int var_14 = 2886096677332909217ULL;
long long int var_15 = 8974638182559954171LL;
long long int var_17 = -3463292032284086205LL;
long long int var_18 = 2402374469540167901LL;
int zero = 0;
long long int var_19 = 3436630158534921866LL;
unsigned char var_20 = (unsigned char)109;
unsigned char var_21 = (unsigned char)110;
long long int var_22 = -115060914451259721LL;
signed char var_23 = (signed char)-39;
_Bool var_24 = (_Bool)0;
int var_25 = 2030916006;
long long int var_26 = -8203085828444224069LL;
unsigned long long int var_27 = 3726862952272975076ULL;
int var_28 = -2007765277;
unsigned short var_29 = (unsigned short)50686;
_Bool var_30 = (_Bool)1;
unsigned int var_31 = 2885016139U;
unsigned char arr_0 [25] ;
unsigned long long int arr_1 [25] ;
long long int arr_5 [20] ;
int arr_7 [20] [20] [20] ;
unsigned long long int arr_8 [20] ;
unsigned int arr_23 [20] ;
signed char arr_24 [25] ;
signed char arr_25 [25] [25] ;
unsigned long long int arr_29 [25] [25] [25] [25] ;
unsigned long long int arr_2 [25] [25] ;
_Bool arr_10 [20] [20] ;
unsigned long long int arr_11 [20] [20] [20] [20] ;
unsigned int arr_15 [20] [20] [20] ;
unsigned int arr_30 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 5893505286575859391ULL : 10890221049664694465ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 7342115679314903457LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 230116609;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 12670281853774067121ULL : 15412330155940740880ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_23 [i_0] = 132313808U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_25 [i_0] [i_1] = (signed char)59;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = 13598209766348632479ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 13626721789473529290ULL : 4600568088638236118ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 8267633293186431208ULL : 4838716571733709394ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 2317463288U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? 3893660267U : 3911385234U;
}

void checksum() {
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
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
