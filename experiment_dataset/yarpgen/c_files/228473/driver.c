#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4483078982825320105LL;
long long int var_2 = -7042258097565399321LL;
unsigned int var_3 = 2679111032U;
unsigned int var_5 = 860788680U;
unsigned int var_7 = 455327685U;
unsigned int var_8 = 2842032936U;
long long int var_10 = -920874773767820494LL;
int var_11 = 316448930;
long long int var_12 = 7045434797422605281LL;
_Bool var_13 = (_Bool)1;
long long int var_14 = 8253722803682535215LL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1185481734U;
unsigned int var_17 = 240229249U;
signed char var_19 = (signed char)86;
int zero = 0;
long long int var_20 = 1096163813165228666LL;
unsigned int var_21 = 732213028U;
_Bool var_22 = (_Bool)0;
long long int var_23 = 4467935861406610587LL;
long long int var_24 = 6324506986750816336LL;
long long int var_25 = -8006009468400375205LL;
long long int var_26 = 8236979952436338292LL;
unsigned int var_27 = 3615937799U;
long long int var_28 = 3707249864864075287LL;
unsigned int var_29 = 979984356U;
int var_30 = -1022508288;
signed char var_31 = (signed char)-127;
_Bool var_32 = (_Bool)1;
unsigned int var_33 = 2104846215U;
long long int arr_11 [10] ;
unsigned int arr_12 [10] ;
int arr_18 [10] [10] [10] ;
unsigned int arr_19 [10] [10] [10] [10] ;
unsigned int arr_29 [19] [19] [19] ;
unsigned int arr_30 [19] [19] ;
long long int arr_31 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -1667441127591983399LL : 3254357468218152876LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 3378729530U : 3811775075U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 1027932269;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 3717089195U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = 2760385010U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_30 [i_0] [i_1] = 240516831U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_31 [i_0] = 5170117798203485292LL;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_29 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
