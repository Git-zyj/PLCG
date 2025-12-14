#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)114;
signed char var_1 = (signed char)-61;
unsigned char var_2 = (unsigned char)172;
int var_3 = 1862020621;
unsigned short var_4 = (unsigned short)54070;
short var_5 = (short)4310;
int var_6 = -1186229183;
unsigned char var_7 = (unsigned char)44;
unsigned short var_8 = (unsigned short)47268;
unsigned char var_10 = (unsigned char)136;
int zero = 0;
unsigned short var_11 = (unsigned short)44437;
int var_12 = -497709948;
unsigned int var_13 = 2353775121U;
unsigned long long int var_14 = 13619247009336379541ULL;
unsigned short var_15 = (unsigned short)62859;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)1249;
signed char var_18 = (signed char)-31;
short var_19 = (short)5765;
unsigned char var_20 = (unsigned char)55;
int var_21 = 740813356;
short var_22 = (short)28573;
short var_23 = (short)21012;
int var_24 = -2027200994;
_Bool var_25 = (_Bool)0;
long long int var_26 = -5487845907285759851LL;
unsigned short var_27 = (unsigned short)29407;
unsigned int var_28 = 3280588780U;
unsigned short var_29 = (unsigned short)49159;
unsigned char var_30 = (unsigned char)178;
unsigned int var_31 = 2024063264U;
unsigned char arr_0 [12] ;
long long int arr_1 [12] ;
int arr_3 [12] ;
int arr_6 [12] [12] ;
short arr_12 [12] [12] [12] ;
unsigned int arr_15 [12] [12] [12] [12] ;
unsigned short arr_18 [12] [12] [12] [12] [12] [12] ;
unsigned int arr_23 [18] ;
unsigned char arr_24 [18] [18] [18] ;
unsigned int arr_26 [18] ;
unsigned char arr_28 [18] [18] ;
unsigned char arr_29 [18] [18] ;
unsigned short arr_32 [18] ;
signed char arr_33 [18] ;
short arr_36 [18] ;
unsigned long long int arr_38 [18] [18] [18] [18] ;
signed char arr_39 [18] ;
short arr_51 [18] [18] [18] ;
short arr_55 [18] ;
short arr_4 [12] ;
short arr_7 [12] [12] [12] ;
unsigned int arr_21 [12] [12] ;
short arr_27 [18] [18] ;
unsigned char arr_30 [18] [18] [18] ;
unsigned int arr_31 [18] ;
signed char arr_34 [18] [18] ;
signed char arr_40 [18] ;
short arr_41 [18] [18] ;
unsigned char arr_42 [18] [18] ;
long long int arr_62 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 2450943165653770724LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = -1854399212;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = -235813845;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)-17628;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 1116132454U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)39559;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = 1191145308U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_26 [i_0] = 436535854U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_28 [i_0] [i_1] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)111 : (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_32 [i_0] = (unsigned short)30784;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? (signed char)91 : (signed char)-119;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_36 [i_0] = (short)10186;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = 4770066407563871259ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_39 [i_0] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)30434 : (short)15417;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_55 [i_0] = (i_0 % 2 == 0) ? (short)9893 : (short)-24764;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (short)24357;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-23463 : (short)-15182;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? 3013916189U : 1620474308U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)28097 : (short)-28645;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)112 : (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? 3965904194U : 459355568U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_34 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-60 : (signed char)-62;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? (signed char)-121 : (signed char)-55;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_41 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)4835 : (short)16729;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_42 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)73 : (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_62 [i_0] [i_1] = (i_1 % 2 == 0) ? 2153770226794627721LL : -6520954437523181922LL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_41 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_42 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_62 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
