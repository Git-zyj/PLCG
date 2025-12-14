#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4276974881995813002ULL;
signed char var_1 = (signed char)-112;
int var_2 = 1645853775;
unsigned short var_4 = (unsigned short)14189;
_Bool var_5 = (_Bool)0;
short var_6 = (short)15801;
unsigned short var_7 = (unsigned short)2597;
_Bool var_8 = (_Bool)1;
int var_9 = 639650754;
short var_10 = (short)5247;
short var_11 = (short)4793;
unsigned char var_12 = (unsigned char)192;
unsigned long long int var_13 = 17306177852784601197ULL;
int var_15 = 538144523;
int zero = 0;
signed char var_16 = (signed char)-120;
signed char var_17 = (signed char)-50;
int var_18 = -1203430676;
unsigned long long int var_19 = 1601604974033141523ULL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)84;
int var_22 = 1024711479;
int var_23 = -1761153634;
int var_24 = -1206136259;
unsigned short var_25 = (unsigned short)20323;
int var_26 = -1538015177;
short var_27 = (short)-2145;
_Bool var_28 = (_Bool)1;
long long int var_29 = -1858623594092808511LL;
unsigned long long int var_30 = 17060514900147311973ULL;
unsigned int var_31 = 325582327U;
int var_32 = -1271892094;
_Bool var_33 = (_Bool)1;
unsigned long long int var_34 = 4739353757266630673ULL;
unsigned short var_35 = (unsigned short)20187;
short var_36 = (short)28108;
_Bool var_37 = (_Bool)0;
short var_38 = (short)31178;
unsigned short var_39 = (unsigned short)10554;
short var_40 = (short)3682;
unsigned int var_41 = 3565748702U;
unsigned char var_42 = (unsigned char)32;
unsigned long long int var_43 = 2854817576518026357ULL;
signed char var_44 = (signed char)120;
unsigned long long int var_45 = 18052815164267688307ULL;
signed char var_46 = (signed char)100;
_Bool arr_2 [10] [10] ;
int arr_4 [21] ;
short arr_6 [10] ;
unsigned short arr_8 [10] ;
unsigned short arr_9 [10] [10] ;
unsigned short arr_10 [10] [10] [10] ;
unsigned char arr_11 [10] ;
long long int arr_16 [12] ;
unsigned char arr_17 [12] [12] ;
unsigned int arr_18 [12] [12] ;
_Bool arr_19 [12] ;
int arr_20 [12] ;
short arr_22 [12] ;
short arr_32 [12] [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 1014141225;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (short)15;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (unsigned short)59599;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)38791;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)27006;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = -7768571814844913690LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)72 : (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? 2600538078U : 494078039U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? -9272875 : -942640973;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (short)-13731 : (short)17356;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (short)137 : (short)-30489;
}

void checksum() {
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
    hash(&seed, var_46);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
