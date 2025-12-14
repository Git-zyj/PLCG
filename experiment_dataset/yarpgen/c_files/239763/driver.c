#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)146;
unsigned int var_13 = 274815655U;
unsigned char var_14 = (unsigned char)120;
int zero = 0;
long long int var_17 = -7106515615040866330LL;
unsigned long long int var_18 = 18145016257959149597ULL;
unsigned short var_19 = (unsigned short)46447;
unsigned short var_20 = (unsigned short)57587;
unsigned long long int var_21 = 14077514831323131994ULL;
unsigned short var_22 = (unsigned short)9298;
unsigned int var_23 = 2101985343U;
long long int var_24 = 1870437483262437244LL;
short var_25 = (short)26127;
unsigned int var_26 = 1960374957U;
unsigned short var_27 = (unsigned short)47528;
unsigned char var_28 = (unsigned char)72;
int var_29 = -254276937;
unsigned char var_30 = (unsigned char)178;
unsigned char var_31 = (unsigned char)177;
_Bool var_32 = (_Bool)0;
int var_33 = -687444622;
long long int var_34 = -7821799941625224581LL;
unsigned char arr_0 [12] [12] ;
int arr_1 [12] ;
unsigned short arr_2 [12] ;
_Bool arr_3 [12] ;
unsigned long long int arr_6 [12] [12] ;
unsigned short arr_7 [15] [15] ;
unsigned char arr_8 [15] ;
unsigned int arr_9 [15] ;
unsigned int arr_10 [15] [15] ;
long long int arr_11 [15] ;
unsigned short arr_15 [15] [15] [15] ;
unsigned int arr_18 [15] [15] [15] ;
long long int arr_21 [15] ;
unsigned int arr_19 [15] [15] [15] ;
unsigned int arr_23 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -1212289570;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)19157;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 7919405299531605089ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)50913;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = 2281526571U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = 3979799761U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = 7926295901362803166LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned short)56769;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 2364008774U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = -3611406020298150667LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 3027009649U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = 3353613659U;
}

void checksum() {
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
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
