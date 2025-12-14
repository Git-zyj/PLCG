#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1293965322;
int var_1 = -1112524928;
unsigned short var_2 = (unsigned short)56816;
long long int var_3 = -3411861772557991373LL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)18060;
int var_6 = -85964321;
unsigned int var_7 = 682738964U;
short var_8 = (short)-2470;
unsigned char var_9 = (unsigned char)57;
int var_10 = 1082040045;
signed char var_11 = (signed char)-23;
unsigned char var_12 = (unsigned char)176;
int var_13 = -734688382;
short var_15 = (short)-13305;
short var_16 = (short)18025;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 3946885995069030600ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)44906;
int var_20 = -321647625;
unsigned long long int var_21 = 10046333844666713622ULL;
long long int var_22 = -3082110918830632552LL;
long long int var_23 = 2597363322137239068LL;
unsigned short var_24 = (unsigned short)50403;
int var_25 = 591490169;
unsigned long long int var_26 = 9467174798232313404ULL;
unsigned char var_27 = (unsigned char)164;
unsigned char var_28 = (unsigned char)151;
unsigned long long int var_29 = 16213924997148083326ULL;
unsigned short var_30 = (unsigned short)23701;
unsigned char var_31 = (unsigned char)243;
unsigned char var_32 = (unsigned char)171;
signed char var_33 = (signed char)-83;
_Bool var_34 = (_Bool)1;
unsigned short var_35 = (unsigned short)39311;
unsigned int var_36 = 2928692807U;
unsigned char arr_0 [22] [22] ;
long long int arr_1 [22] ;
unsigned short arr_3 [16] [16] ;
_Bool arr_5 [20] [20] ;
unsigned char arr_8 [20] ;
signed char arr_9 [24] ;
int arr_10 [24] ;
signed char arr_12 [24] [24] [24] ;
long long int arr_13 [24] [24] [24] ;
_Bool arr_15 [24] [24] [24] ;
unsigned int arr_16 [24] [24] [24] ;
unsigned int arr_18 [24] [24] [24] ;
unsigned char arr_28 [17] ;
unsigned char arr_31 [17] [17] [17] [17] ;
int arr_11 [24] ;
_Bool arr_14 [24] ;
_Bool arr_21 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 5450806384844640439LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)36041;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 1919623600;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 7907556711429703482LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1948119404U : 1331660602U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3956977318U : 2082762914U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_28 [i_0] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)41 : (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = 336073393;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_21 [i_0] [i_1] = (_Bool)0;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
