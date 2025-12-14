#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3855062488U;
signed char var_1 = (signed char)15;
unsigned char var_3 = (unsigned char)230;
unsigned int var_4 = 531521058U;
long long int var_6 = -6454368643491674463LL;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)199;
int var_10 = 1491593827;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-126;
long long int var_13 = 4140956232554228808LL;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)214;
unsigned long long int var_17 = 4232163383449721379ULL;
long long int var_18 = -3352307045071390222LL;
unsigned short var_19 = (unsigned short)12194;
int var_20 = 707105722;
long long int var_21 = 4244805920117654061LL;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)199;
unsigned char var_24 = (unsigned char)80;
long long int var_25 = 7334066588253780255LL;
long long int var_26 = 468954290566800606LL;
int var_27 = 1443339469;
long long int var_28 = -2909802910508236323LL;
unsigned char var_29 = (unsigned char)32;
int var_30 = 458959680;
unsigned long long int var_31 = 12276302228495124749ULL;
long long int var_32 = -5035507289497171669LL;
int var_33 = 1610988485;
int arr_0 [11] ;
long long int arr_1 [11] ;
long long int arr_5 [11] ;
long long int arr_6 [11] [11] [11] ;
unsigned int arr_7 [11] [11] [11] ;
unsigned long long int arr_8 [11] [11] [11] [11] ;
long long int arr_11 [11] [11] [11] ;
short arr_13 [11] [11] [11] ;
_Bool arr_16 [11] [11] [11] [11] [11] ;
long long int arr_18 [11] [11] [11] [11] ;
signed char arr_19 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -599422678;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1994288222526752999LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 2464697734990219199LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 6734741814020472275LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3500374449U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 7657764017292031193ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 613687045999356181LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)1563;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 8316284692011836299LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (signed char)-43;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
