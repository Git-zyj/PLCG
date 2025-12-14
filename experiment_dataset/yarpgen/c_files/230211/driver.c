#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-3190;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-14369;
unsigned short var_8 = (unsigned short)27247;
_Bool var_11 = (_Bool)1;
short var_13 = (short)5899;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)44010;
short var_16 = (short)-28038;
int zero = 0;
unsigned short var_17 = (unsigned short)39982;
unsigned short var_18 = (unsigned short)25817;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)26014;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)0;
short var_25 = (short)-30965;
short var_26 = (short)-28390;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)1;
unsigned short var_30 = (unsigned short)10152;
_Bool var_31 = (_Bool)0;
_Bool var_32 = (_Bool)0;
short var_33 = (short)4670;
short var_34 = (short)15386;
short var_35 = (short)-7166;
_Bool var_36 = (_Bool)0;
_Bool var_37 = (_Bool)1;
_Bool var_38 = (_Bool)0;
_Bool var_39 = (_Bool)0;
_Bool var_40 = (_Bool)1;
unsigned short var_41 = (unsigned short)39653;
_Bool var_42 = (_Bool)1;
unsigned short var_43 = (unsigned short)2188;
unsigned short var_44 = (unsigned short)11541;
short var_45 = (short)21843;
unsigned short arr_1 [17] ;
short arr_2 [17] ;
unsigned short arr_3 [17] ;
_Bool arr_4 [17] [17] ;
unsigned short arr_5 [17] [17] [17] [17] ;
unsigned short arr_6 [17] [17] [17] ;
_Bool arr_8 [17] [17] ;
unsigned short arr_9 [17] [17] ;
unsigned short arr_10 [17] ;
short arr_11 [17] [17] [17] ;
unsigned short arr_12 [16] ;
_Bool arr_15 [16] [16] ;
_Bool arr_18 [16] [16] [16] ;
short arr_20 [16] [16] [16] [16] ;
_Bool arr_22 [16] [16] [16] [16] ;
unsigned short arr_23 [16] [16] [16] [16] [16] [16] [16] ;
short arr_27 [24] ;
unsigned short arr_30 [24] [24] ;
_Bool arr_31 [24] ;
short arr_32 [24] [24] [24] ;
_Bool arr_33 [24] ;
_Bool arr_42 [19] [19] ;
_Bool arr_37 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)16401;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)-30329;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)13238;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned short)20417;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)59169;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)8994;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (unsigned short)32683;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)26599;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (unsigned short)13748;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (short)30674;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)26010;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_27 [i_0] = (short)-30667;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned short)2347;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_31 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (short)-14208;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_33 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_42 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
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
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
