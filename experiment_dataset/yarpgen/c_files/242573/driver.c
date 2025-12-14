#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 3622131447U;
signed char var_3 = (signed char)-119;
unsigned char var_5 = (unsigned char)254;
long long int var_7 = -4532881106643548540LL;
unsigned char var_9 = (unsigned char)10;
int var_10 = 1737760826;
int zero = 0;
long long int var_11 = 8933209863477379955LL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)48534;
unsigned char var_14 = (unsigned char)62;
short var_15 = (short)-19721;
long long int var_16 = -1357821361612421770LL;
unsigned char var_17 = (unsigned char)28;
unsigned int var_18 = 3131333378U;
short var_19 = (short)30673;
int var_20 = 786023533;
signed char var_21 = (signed char)-124;
unsigned int var_22 = 1041121574U;
long long int var_23 = 5492507067136636577LL;
unsigned short var_24 = (unsigned short)26060;
signed char var_25 = (signed char)95;
unsigned char var_26 = (unsigned char)161;
_Bool var_27 = (_Bool)0;
unsigned char var_28 = (unsigned char)135;
long long int var_29 = -512723191801038933LL;
long long int var_30 = 1351299229436794863LL;
long long int var_31 = -2352998740574659540LL;
unsigned long long int var_32 = 11592193580159131705ULL;
signed char arr_0 [17] ;
unsigned short arr_1 [17] ;
long long int arr_2 [17] [17] [17] ;
long long int arr_4 [17] ;
_Bool arr_9 [17] [17] [17] [17] ;
long long int arr_11 [17] [17] [17] [17] [17] [17] [17] ;
unsigned int arr_13 [17] ;
unsigned char arr_14 [17] [17] [17] ;
unsigned short arr_20 [22] ;
long long int arr_23 [22] ;
unsigned short arr_24 [22] [22] ;
unsigned long long int arr_27 [22] [22] [22] ;
unsigned char arr_31 [22] [22] ;
unsigned short arr_32 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)12064;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -634029162576020841LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -3393483487343180167LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? -438748350825454826LL : 1443006520558926408LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 890580810U : 2343246689U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = (unsigned short)41698;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_23 [i_0] = 5231473333501497119LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned short)39568;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 11225056661942976634ULL : 2650301728357588343ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_31 [i_0] [i_1] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)41545 : (unsigned short)13899;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
