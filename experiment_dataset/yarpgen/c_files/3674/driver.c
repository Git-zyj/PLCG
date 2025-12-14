#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)9;
signed char var_2 = (signed char)-69;
short var_3 = (short)-4282;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1500369975U;
unsigned char var_6 = (unsigned char)30;
_Bool var_7 = (_Bool)1;
int var_8 = -738326379;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = 1640797118;
unsigned short var_11 = (unsigned short)45049;
signed char var_12 = (signed char)32;
int var_13 = -475823298;
unsigned long long int var_14 = 15421048273220599629ULL;
unsigned long long int var_15 = 15818216613739058331ULL;
unsigned long long int var_16 = 16232474763141764910ULL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 16372335180552606983ULL;
long long int var_19 = 3496997032565981977LL;
long long int var_20 = 7573505675404066242LL;
unsigned char var_21 = (unsigned char)20;
int var_22 = 278824323;
long long int var_23 = 1099495493798906645LL;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 10529844666953681937ULL;
int var_26 = 1792275056;
unsigned short var_27 = (unsigned short)54636;
unsigned short var_28 = (unsigned short)47293;
unsigned long long int var_29 = 1867982319326832576ULL;
_Bool var_30 = (_Bool)0;
unsigned int var_31 = 3685119010U;
short var_32 = (short)-4078;
_Bool arr_11 [21] [21] [21] ;
unsigned short arr_15 [21] [21] ;
unsigned short arr_16 [21] [21] [21] [21] ;
unsigned int arr_28 [17] ;
_Bool arr_31 [17] [17] [17] [17] ;
long long int arr_35 [17] [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)24659;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned short)57292;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_28 [i_0] = 2082622908U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 7605838924036822919LL;
}

void checksum() {
    hash(&seed, var_10);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
