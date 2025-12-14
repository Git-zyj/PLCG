#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 793969002881287092LL;
int var_1 = 1503198442;
long long int var_3 = -2139114305843687667LL;
long long int var_4 = -8309754583697354386LL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-72;
int var_7 = 2025858261;
long long int var_8 = -8689051384565796626LL;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)209;
int var_11 = 1681068749;
unsigned char var_12 = (unsigned char)22;
_Bool var_13 = (_Bool)0;
_Bool var_15 = (_Bool)0;
long long int var_16 = -905490207534224747LL;
int zero = 0;
unsigned short var_17 = (unsigned short)1298;
int var_18 = -1019051435;
unsigned char var_19 = (unsigned char)252;
unsigned long long int var_20 = 14049034757504672058ULL;
int var_21 = 1019096718;
unsigned short var_22 = (unsigned short)54657;
_Bool var_23 = (_Bool)1;
long long int var_24 = 6754273032611962841LL;
signed char var_25 = (signed char)-12;
unsigned long long int var_26 = 8911991341620100576ULL;
unsigned short var_27 = (unsigned short)26767;
short var_28 = (short)19828;
short var_29 = (short)-30368;
int var_30 = 1262012195;
_Bool var_31 = (_Bool)0;
unsigned short var_32 = (unsigned short)53248;
unsigned char var_33 = (unsigned char)205;
_Bool var_34 = (_Bool)0;
short var_35 = (short)24170;
long long int var_36 = 7888454135978057096LL;
unsigned char var_37 = (unsigned char)34;
unsigned char var_38 = (unsigned char)24;
int var_39 = 1696414877;
unsigned long long int var_40 = 5734783919671968595ULL;
unsigned long long int var_41 = 11225773910631422463ULL;
_Bool arr_22 [10] [10] [10] [10] ;
short arr_26 [10] ;
short arr_33 [10] [10] [10] ;
long long int arr_34 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (short)-28596 : (short)29796;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-25511 : (short)-11553;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -5968980642574783610LL : -3481184757054931585LL;
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
